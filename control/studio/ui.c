﻿// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.2
// LVGL version: 8.3.4
// Project name: SquareLine_Project

#include "ui.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_UserPanel;
lv_obj_t * ui_UserImage;
lv_obj_t * ui_TimeLable;
lv_obj_t * ui_WelcomeLabel;
lv_obj_t * ui_DateLabel;
lv_obj_t * ui_HumidityPanel;
lv_obj_t * ui_ChineseHumLabel;
lv_obj_t * ui_HumImage;
lv_obj_t * ui_HumidityLable;
lv_obj_t * ui_HumLable;
lv_obj_t * ui_TempPanel;
lv_obj_t * ui_ChineseTempLabel;
lv_obj_t * ui_TempImage;
lv_obj_t * ui_TemperatureLable;
lv_obj_t * ui_TempLable;
lv_obj_t * ui_WeatherPanel;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Switch2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Panel3;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
extern const lv_font_t smileysans_24;
///////////////////// SCREENS ////////////////////
void ui_Home_screen_init(lv_obj_t* context)
{
    ui_Home = context;
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UserPanel = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_UserPanel, 700);
    lv_obj_set_height(ui_UserPanel, 180);
    lv_obj_set_x(ui_UserPanel, 0);
    lv_obj_set_y(ui_UserPanel, 10);
    lv_obj_set_align(ui_UserPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_UserPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_UserImage = lv_img_create(ui_UserPanel);
    lv_img_set_src(ui_UserImage, &ui_img_user_png);
    lv_obj_set_width(ui_UserImage, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_UserImage, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_UserImage, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_UserImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_UserImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TimeLable = lv_label_create(ui_UserPanel);
    lv_obj_set_width(ui_TimeLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimeLable, 0);
    lv_obj_set_y(ui_TimeLable, -15);
    lv_obj_set_align(ui_TimeLable, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_TimeLable, "23:14:30");
    lv_obj_set_style_text_color(ui_TimeLable, lv_color_hex(0x126EE7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TimeLable, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WelcomeLabel = lv_label_create(ui_UserPanel);
    lv_obj_set_width(ui_WelcomeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WelcomeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WelcomeLabel, 165);
    lv_obj_set_y(ui_WelcomeLabel, 0);
    lv_obj_set_align(ui_WelcomeLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WelcomeLabel, "欢迎 , 来到\n你的家 , Chord");
    lv_obj_set_style_text_color(ui_WelcomeLabel, lv_color_hex(0x126EE7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WelcomeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WelcomeLabel, &smileysans_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DateLabel = lv_label_create(ui_UserPanel);
    lv_obj_set_width(ui_DateLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DateLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DateLabel, 0);
    lv_obj_set_y(ui_DateLabel, -25);
    lv_obj_set_align(ui_DateLabel, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_DateLabel, "2023\\3\\14");
    lv_obj_set_style_text_color(ui_DateLabel, lv_color_hex(0x4785D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DateLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DateLabel, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HumidityPanel = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_HumidityPanel, 160);
    lv_obj_set_height(ui_HumidityPanel, 160);
    lv_obj_set_x(ui_HumidityPanel, 0);
    lv_obj_set_y(ui_HumidityPanel, 210);
    lv_obj_clear_flag(ui_HumidityPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_HumidityPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_HumidityPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_HumidityPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_HumidityPanel, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_HumidityPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_HumidityPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_HumidityPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_HumidityPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChineseHumLabel = lv_label_create(ui_HumidityPanel);
    lv_obj_set_width(ui_ChineseHumLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChineseHumLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChineseHumLabel, 0);
    lv_obj_set_y(ui_ChineseHumLabel, -5);
    lv_obj_set_align(ui_ChineseHumLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_ChineseHumLabel, "湿度");
    lv_obj_set_style_text_color(ui_ChineseHumLabel, lv_color_hex(0x805DF6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChineseHumLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChineseHumLabel, &smileysans_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HumImage = lv_img_create(ui_HumidityPanel);
    lv_img_set_src(ui_HumImage, &ui_img_humidity_png);
    lv_obj_set_width(ui_HumImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumImage, -10);
    lv_obj_set_y(ui_HumImage, 0);
    lv_obj_set_align(ui_HumImage, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_HumImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_HumImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_HumidityLable = lv_label_create(ui_HumidityPanel);
    lv_obj_set_width(ui_HumidityLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumidityLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumidityLable, 25);
    lv_obj_set_y(ui_HumidityLable, 0);
    lv_obj_set_align(ui_HumidityLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HumidityLable, "48.5%");
    lv_obj_set_style_text_color(ui_HumidityLable, lv_color_hex(0xD4357F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HumidityLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HumidityLable, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HumLable = lv_label_create(ui_HumidityPanel);
    lv_obj_set_width(ui_HumLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_HumLable, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_HumLable, "Humidity");
    lv_obj_set_style_text_color(ui_HumLable, lv_color_hex(0x878787), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HumLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HumLable, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempPanel = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_TempPanel, 160);
    lv_obj_set_height(ui_TempPanel, 160);
    lv_obj_set_x(ui_TempPanel, 180);
    lv_obj_set_y(ui_TempPanel, 210);
    lv_obj_clear_flag(ui_TempPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TempPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_TempPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_TempPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_TempPanel, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_TempPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_TempPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_TempPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_TempPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChineseTempLabel = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_ChineseTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChineseTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChineseTempLabel, 0);
    lv_obj_set_y(ui_ChineseTempLabel, -5);
    lv_obj_set_align(ui_ChineseTempLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_ChineseTempLabel, "温度");
    lv_obj_set_style_text_color(ui_ChineseTempLabel, lv_color_hex(0x805DF6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChineseTempLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChineseTempLabel, &smileysans_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempImage = lv_img_create(ui_TempPanel);
    lv_img_set_src(ui_TempImage, &ui_img_temperature_png);
    lv_obj_set_width(ui_TempImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TempImage, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_TempImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_TempImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TemperatureLable = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_TemperatureLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TemperatureLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TemperatureLable, 10);
    lv_obj_set_y(ui_TemperatureLable, 0);
    lv_obj_set_align(ui_TemperatureLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TemperatureLable, "48.5°");
    lv_obj_set_style_text_color(ui_TemperatureLable, lv_color_hex(0xD4357F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TemperatureLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TemperatureLable, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempLable = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_TempLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TempLable, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_TempLable, "Temperature");
    lv_obj_set_style_text_color(ui_TempLable, lv_color_hex(0x878787), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempLable, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WeatherPanel = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_WeatherPanel, 340);
    lv_obj_set_height(ui_WeatherPanel, 160);
    lv_obj_set_x(ui_WeatherPanel, 0);
    lv_obj_set_y(ui_WeatherPanel, 210);
    lv_obj_set_align(ui_WeatherPanel, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_WeatherPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WeatherPanel, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_WeatherPanel, &ui_img_sunny_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WeatherPanel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_WeatherPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_WeatherPanel, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_WeatherPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_WeatherPanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_WeatherPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_WeatherPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_Panel2, 225);
    lv_obj_set_height(ui_Panel2, 225);
    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, 390);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel2, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel2, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Panel2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label1, "灯");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xF60000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &smileysans_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_Image2, &ui_img_light_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Switch2 = lv_switch_create(ui_Panel2);
    lv_obj_set_width(ui_Switch2, 50);
    lv_obj_set_height(ui_Switch2, 25);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_TOP_RIGHT);

    ui_Label2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label2, "Lighting");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_Panel4, 225);
    lv_obj_set_height(ui_Panel4, 225);
    lv_obj_set_x(ui_Panel4, 238);
    lv_obj_set_y(ui_Panel4, 390);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel4, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel4, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel4, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel4, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Panel4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_Panel3, 225);
    lv_obj_set_height(ui_Panel3, 225);
    lv_obj_set_x(ui_Panel3, 0);
    lv_obj_set_y(ui_Panel3, 390);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel3, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel3, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Panel3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{

}