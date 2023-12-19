// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: handheld_gui_v1_1

#include "ui.h"

void ui_mainScreen_screen_init(void)
{
    ui_mainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_mainScreen, lv_color_hex(0xD2B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -131);
    lv_obj_set_y(ui_Label4, -105);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "JENCE");
    lv_obj_add_flag(ui_Label4, LV_OBJ_FLAG_CLICKABLE);     /// Flags

    ui_status_label = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_status_label, 3);
    lv_obj_set_y(ui_status_label, -3);
    lv_obj_set_align(ui_status_label, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_status_label, "");

    ui_wifiIcon = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_wifiIcon, &ui_img_259472572);
    lv_obj_set_width(ui_wifiIcon, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_wifiIcon, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_wifiIcon, lv_pct(36));
    lv_obj_set_y(ui_wifiIcon, lv_pct(-44));
    lv_obj_set_align(ui_wifiIcon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_wifiIcon, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_wifiIcon, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_noWifiIcon = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_noWifiIcon, &ui_img_1743670017);
    lv_obj_set_width(ui_noWifiIcon, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_noWifiIcon, LV_SIZE_CONTENT);    /// 18
    lv_obj_set_x(ui_noWifiIcon, lv_pct(37));
    lv_obj_set_y(ui_noWifiIcon, lv_pct(-44));
    lv_obj_set_align(ui_noWifiIcon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_noWifiIcon, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_noWifiIcon, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_countLabel = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_countLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_countLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_countLabel, 3);
    lv_obj_set_y(ui_countLabel, -23);
    lv_obj_set_align(ui_countLabel, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_countLabel, "");

    ui_setupButton1 = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_setupButton1, &ui_img_settings11_png);
    lv_obj_set_width(ui_setupButton1, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_setupButton1, LV_SIZE_CONTENT);    /// 20
    lv_obj_set_x(ui_setupButton1, lv_pct(45));
    lv_obj_set_y(ui_setupButton1, lv_pct(-44));
    lv_obj_set_align(ui_setupButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setupButton1, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_setupButton1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_timeLabel = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_timeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeLabel, 57);
    lv_obj_set_y(ui_timeLabel, 7);
    lv_label_set_text(ui_timeLabel, "");

    ui_sdLogo = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_sdLogo, &ui_img_sd_card_png);
    lv_obj_set_width(ui_sdLogo, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_sdLogo, LV_SIZE_CONTENT);    /// 20
    lv_obj_set_x(ui_sdLogo, 50);
    lv_obj_set_y(ui_sdLogo, -105);
    lv_obj_set_align(ui_sdLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_sdLogo, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_sdLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_mergeSwitch = lv_switch_create(ui_mainScreen);
    lv_obj_set_width(ui_mergeSwitch, lv_pct(11));
    lv_obj_set_height(ui_mergeSwitch, lv_pct(9));
    lv_obj_set_x(ui_mergeSwitch, lv_pct(26));
    lv_obj_set_y(ui_mergeSwitch, lv_pct(-44));
    lv_obj_set_align(ui_mergeSwitch, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_mergeSwitch, lv_color_hex(0xC1E2AA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mergeSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);


    lv_obj_add_event_cb(ui_Label4, ui_event_Label4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifiIcon, ui_event_wifiIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_noWifiIcon, ui_event_noWifiIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setupButton1, ui_event_setupButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_mergeSwitch, ui_event_mergeSwitch, LV_EVENT_ALL, NULL);

}
