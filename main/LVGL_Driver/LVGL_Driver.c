/*
 * SPDX-FileCopyrightText: 2025 Mark Asselstine
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */
#include "LVGL_Driver.h"

static const char *TAG_LVGL = "WS_LVGL";

static lv_color_t buf1[ LVGL_BUF_LEN ];
static lv_color_t buf2[ LVGL_BUF_LEN ];    

lv_display_t *disp;                                                 // contains internal graphic buffer(s) called draw buffer(s)
    
void example_increase_lvgl_tick(void *arg)
{
    /* Tell LVGL how many milliseconds has elapsed */
    lv_tick_inc(EXAMPLE_LVGL_TICK_PERIOD_MS);
}

bool example_notify_lvgl_flush_ready(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_io_event_data_t *edata, void *user_ctx)
{
    //lv_display_t *display = (lv_display_t *)user_ctx;
    lv_disp_flush_ready(disp);
    return false;
}

void example_lvgl_flush_cb(lv_display_t * disp, const lv_area_t * area, uint8_t * px_map)
{
    esp_lcd_panel_handle_t panel_handle = (esp_lcd_panel_handle_t) lv_display_get_user_data(disp);
    int offsetx1 = area->x1;
    int offsetx2 = area->x2;
    int offsety1 = area->y1;
    int offsety2 = area->y2;
    // copy a buffer's content to a specific area of the display
    esp_lcd_panel_draw_bitmap(panel_handle, offsetx1 + Offset_X, offsety1 + Offset_Y, offsetx2 + Offset_X + 1, offsety2 + Offset_Y + 1, px_map+8);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
lv_disp_t *disp;
void LVGL_Init(void)
{
    ESP_LOGI(TAG_LVGL, "Initialize LVGL library");
    lv_init();
    

    ESP_LOGI(TAG_LVGL,"Register display indev to LVGL");                                      // Custom display driver user data

    disp = lv_display_create(EXAMPLE_LCD_H_RES, EXAMPLE_LCD_V_RES);
    lv_display_set_flush_cb(disp, example_lvgl_flush_cb);
    lv_display_set_buffers(disp, buf1, buf2, LVGL_BUF_LEN, LV_DISPLAY_RENDER_MODE_PARTIAL);  // initialize LVGL draw buffers
    lv_display_set_user_data(disp, panel_handle);
    
    /********************* LVGL *********************/
    ESP_LOGI(TAG_LVGL, "Install LVGL tick timer");
    // Tick interface for LVGL (using esp_timer to generate 2ms periodic event)
    const esp_timer_create_args_t lvgl_tick_timer_args = {
        .callback = &example_increase_lvgl_tick,
        .name = "lvgl_tick"
    };

    //lv_display_set_color_format(disp, LV_COLOR_FORMAT_I1);
    
    esp_timer_handle_t lvgl_tick_timer = NULL;
    ESP_ERROR_CHECK(esp_timer_create(&lvgl_tick_timer_args, &lvgl_tick_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(lvgl_tick_timer, EXAMPLE_LVGL_TICK_PERIOD_MS * 1000));

}
