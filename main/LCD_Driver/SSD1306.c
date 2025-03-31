/*
 * SPDX-FileCopyrightText: 2025 Mark Asselstine
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */
#include "SSD1306.h"
#include <driver/i2c_master.h>

#include "esp_check.h"
#include "esp_lcd_panel_interface.h"

#include "string.h"

typedef struct {
    esp_lcd_panel_t base;
    esp_lcd_panel_io_handle_t io;
    uint8_t height;
    int reset_gpio_num;
    int x_gap;
    int y_gap;
    unsigned int bits_per_pixel;
    bool reset_level;
    bool swap_axes;
} ssd1306_panel_t;

static const char *TAG_LCD = "WS_LCD";

esp_lcd_panel_handle_t panel_handle = NULL;


void convert_bit_array_to_byte_array(const uint8_t bit_array[8][9], uint8_t byte_array[72]) {
    // Iterate through each column (72 total)
    for (int col = 0; col < 72; ++col) {
        uint8_t byte = 0;

        // Iterate through each of the 8 rows
        for (int row = 0; row < 8; ++row) {
            // Get the bit from the bit array (extract bit from correct byte and position)
            int bit = (bit_array[row][col / 8] >> (7 - col % 8)) & 1;

            // Set the bit in the corresponding position of the byte
            byte |= (bit << (row));
        }

        // Store the resulting byte in the byte_array
        byte_array[col] = byte;
    }
}

/*
 * panel_ssd1306_draw_bitmap() makes use of Horizontal Addressing Mode. This doesn't work on this device, either because
 * it is actually a SH1106 or just broken. Here we implement things using Page Addressing Mode. This just means that we
 * need to be concerned about rows (pages) and can't rely on automatic page incrementing.
 */
static esp_err_t custom_panel_ssd1306_draw_bitmap(esp_lcd_panel_t *panel, int x_start, int y_start, int x_end, int y_end, const void *color_data)
{
    ssd1306_panel_t *ssd1306 = __containerof(panel, ssd1306_panel_t, base);
    esp_lcd_panel_io_handle_t io = ssd1306->io;

    // adding extra gap
    x_start += ssd1306->x_gap;
    x_end += ssd1306->x_gap;
    y_start += ssd1306->y_gap;
    y_end += ssd1306->y_gap;

    if (ssd1306->swap_axes) {
        int x = x_start;
        x_start = y_start;
        y_start = x;
        x = x_end;
        x_end = y_end;
        y_end = x;
    }

    // one page contains 8 rows (COMs)
    uint8_t page_start = y_start / 8;
    uint8_t page_end = (y_end - 1) / 8;

    uint8_t cols = x_end - x_start;

    // Set start column lower nibble and upper nibble
    uint8_t start_col = 0x1E + x_start;
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io, 0x10 | ((start_col&0x70) >> 4), (uint8_t[]) {}, 0));
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io, (start_col&0x0F), (uint8_t[]) {}, 0));

    for (uint8_t page = page_start; page <= page_end; page++ ) {
        uint8_t data[cols];
        //memset(data, 0, cols);
        convert_bit_array_to_byte_array(color_data, data);

        ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io, 0xB0+page, (uint8_t[]) {}, 0));
        ESP_ERROR_CHECK(esp_lcd_panel_io_tx_color(io, -1, (const void *)data, cols));
    }
    
    return ESP_OK;
}

void LCD_Init(void)
{
    ESP_LOGI(TAG_LCD, "Initialize I2C bus");
    i2c_master_bus_handle_t i2c_bus = NULL;
    i2c_master_bus_config_t bus_config = {
        .clk_source = I2C_CLK_SRC_DEFAULT,
        .glitch_ignore_cnt = 7,
        .i2c_port = I2C_NUM_0,
        .sda_io_num = 5,
        .scl_io_num = 6,
        .flags.enable_internal_pullup = true,
    };
    ESP_ERROR_CHECK(i2c_new_master_bus(&bus_config, &i2c_bus));

    ESP_LOGI(TAG_LCD, "Install panel IO");
    esp_lcd_panel_io_handle_t io_handle = NULL;
    esp_lcd_panel_io_i2c_config_t io_config = {
        .dev_addr = 0x3C,
        .scl_speed_hz = 400 * 1000,
        .control_phase_bytes = 1, // Just one
        .dc_bit_offset = 6,       // 0x40
        .lcd_cmd_bits = 8,
        .lcd_param_bits = 8,
        .on_color_trans_done = example_notify_lvgl_flush_ready,
        .user_ctx = disp,
        .flags.dc_low_on_data = 0,
        .flags.disable_control_phase = 0,
    };
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_i2c(i2c_bus, &io_config, &io_handle));

    esp_lcd_panel_dev_config_t panel_config = {
        .bits_per_pixel = 1,
        .reset_gpio_num = -1,
    };
    ESP_ERROR_CHECK(esp_lcd_new_panel_ssd1306(io_handle, &panel_config, &panel_handle));

    ESP_ERROR_CHECK(esp_lcd_panel_reset(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_init(panel_handle));
    //ESP_ERROR_CHECK(esp_lcd_panel_mirror(panel_handle, true, false));
    
    // user can flush pre-defined pattern to the screen before we turn on the screen or backlight
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));

    // Additional LCD configuration
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io_handle, 0x20, (uint8_t[]) {0x02}, 1)); // Set Page addressing mode
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io_handle, 0xA1, (uint8_t[]) {}, 0)); // Set segment re-map
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io_handle, 0xC8, (uint8_t[]) {}, 0)); // Set COM output scan direction
    ESP_ERROR_CHECK(esp_lcd_panel_io_tx_param(io_handle, 0x7F-11, (uint8_t[]) {}, 0)); // Set starting column (rotate be 12)
    panel_handle->draw_bitmap = custom_panel_ssd1306_draw_bitmap;
}
