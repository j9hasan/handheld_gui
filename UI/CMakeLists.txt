SET(SOURCES ui_mainScreen.c
    ui_setupScreen.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    ui_img_259472572.c
    ui_img_1743670017.c
    ui_img_settings11_png.c
    ui_img_sd_card_png.c
    ui_img_home_png.c
    ui_img_sd_card_error_png.c)

add_library(ui ${SOURCES})
