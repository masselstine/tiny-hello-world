idf_component_register(
                    PRIV_REQUIRES spi_flash
                    SRCS
                        "tiny_hello_world.c"
                        "LCD_Driver/SSD1306.c"
                        "LVGL_Driver/LVGL_Driver.c"
                    INCLUDE_DIRS
                        "./LCD_Driver"
                        "./LVGL_Driver"
                        "."
                    REQUIRES
                        "esp_timer"
                        "esp_lcd"
                        "ui"
                        "lvgl"
                    )
