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
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"
#include "lvgl.h"

#include "esp_lcd_panel_ssd1306.h"
#include "LVGL_Driver.h"

// The pixel number in horizontal and vertical
#define EXAMPLE_LCD_H_RES              72
#define EXAMPLE_LCD_V_RES              40
// Bit number used to represent command and parameter
#define EXAMPLE_LCD_CMD_BITS           8
#define EXAMPLE_LCD_PARAM_BITS         8

#define Offset_X 0
#define Offset_Y 0

extern esp_lcd_panel_handle_t panel_handle;

void LCD_Init(void);                     // Call this function to initialize the screen (must be called in the main function) !!!!!
