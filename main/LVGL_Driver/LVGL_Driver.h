/*
 * SPDX-FileCopyrightText: 2025 Mark Asselstine
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */
#pragma once
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_timer.h"
#include "esp_err.h"
#include "esp_log.h"
#include "lvgl.h"
#include "demos/lv_demos.h"

#include "SSD1306.h"

#define LVGL_BUF_LEN  (EXAMPLE_LCD_H_RES+8)                        // Forces 1 page at a time, LVGL needs the +8 for the palette.
#define EXAMPLE_LVGL_TICK_PERIOD_MS    2

extern lv_display_t *disp;    

bool example_notify_lvgl_flush_ready(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_io_event_data_t *edata, void *user_ctx);
void example_lvgl_flush_cb(lv_display_t * disp, const lv_area_t * area, uint8_t * px_map);
/* Rotate display and touch, when rotated screen in LVGL. Called when driver parameters are updated. */
void example_increase_lvgl_tick(void *arg);

void LVGL_Init(void);                     // Call this function to initialize the screen (must be called in the main function) !!!!!