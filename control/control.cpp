#include "control.h"
#include "studio/ui.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "Timer.hpp"
#include "Iot.h"
#include "protos/msg.pb.h"
#include "protos/pb_decode.h"
#include "protos/pb_encode.h"
extern "C" {
    extern const lv_font_t smileysans_16;
    extern const lv_font_t smileysans_24;
    extern const lv_img_dsc_t img_demo_widgets_avatar;
    extern const lv_img_dsc_t iot_icon;
    extern void ui_Home_screen_init(lv_obj_t* context);
}
namespace Control {
    auto& font_large = smileysans_24;
    auto& font_normal = smileysans_16;
    lv_style_t style_title;
    lv_style_t style_icon;
    Timer timer;

    void show() {
        lv_theme_default_init(NULL, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), LV_THEME_DEFAULT_DARK,&font_normal);

        lv_style_init(&style_title);
        lv_style_set_text_font(&style_title, &font_large);

        lv_style_init(&style_icon);
        lv_style_set_text_color(&style_icon, lv_theme_get_color_primary(NULL));
        lv_style_set_text_font(&style_icon, &font_large);


        //创建 tabview 高度70 lv_scr_act = 当前窗口
        auto tv = lv_tabview_create(lv_scr_act(), LV_DIR_TOP, 70);
        lv_obj_set_style_text_font(lv_scr_act(), &font_normal, 0);
        
        //挪一挪
        lv_obj_t* tab_btns = lv_tabview_get_tab_btns(tv);
        lv_obj_set_style_pad_left(tab_btns, LV_HOR_RES / 2, 0);
        lv_obj_t* logo = lv_img_create(tab_btns);
        lv_img_set_src(logo, &iot_icon);
        lv_obj_align(logo, LV_ALIGN_LEFT_MID, -LV_HOR_RES / 2 + 25, 0);
        lv_obj_align(logo, LV_ALIGN_LEFT_MID, -LV_HOR_RES / 2 + 25, 0);

        lv_obj_t* label = lv_label_create(tab_btns);
        lv_obj_add_style(label, &style_title, 0);
        lv_label_set_text(label, "控制");
        lv_obj_align_to(label, logo, LV_ALIGN_OUT_RIGHT_TOP, 10, 0);
        lv_obj_set_style_text_color(label, lv_color_hex(0x126EE7), LV_PART_MAIN | LV_STATE_DEFAULT);
        label = lv_label_create(tab_btns);
        lv_label_set_text(label, "Control");
        lv_obj_set_style_text_color(label, lv_color_hex(0x4785D8), LV_PART_MAIN | LV_STATE_DEFAULT);

    
        lv_obj_align_to(label, logo, LV_ALIGN_OUT_RIGHT_BOTTOM, 10, 0);

        lv_obj_t* t1 = lv_tabview_add_tab(tv, "主页");
        lv_obj_t* t2 = lv_tabview_add_tab(tv, "设置");
        ui_Home_screen_init(t1);

        timer.setInterval(1000, []() {

            static int mday = 0;

            auto now = std::chrono::system_clock::now();
            auto now_c = std::chrono::system_clock::to_time_t(now);
            auto tm = std::localtime(&now_c);
            //格式 23/32/30
            char buf[32];
            strftime(buf, sizeof(buf), "%H:%M:%S", tm);
            lv_label_set_text(ui_TimeLable, buf);
            if (mday != tm->tm_mday) {
                strftime(buf, sizeof(buf), "%Y-%m-%d", tm);
                lv_label_set_text(ui_DateLabel, buf);
                mday = tm->tm_mday;

            }

        });


        Iot::GetInstance()->Subscribe("esp32/aht10", [](std::vector<uint8_t> datas) {
            auto istream = pb_istream_from_buffer(datas.data(), datas.size());
            TemperatureAndHumidity in = TemperatureAndHumidity_init_default;
            if (pb_decode(&istream, TemperatureAndHumidity_fields, &in)) {
                //printf_s("%f ,%f\n", in.humidity, in.temperature);
                char buffer[128] = { 0 };
                sprintf(buffer, "%.1f°", in.temperature);
                lv_label_set_text(ui_TemperatureLable, buffer);
                sprintf(buffer, "%.1f%%", in.humidity);
                lv_label_set_text(ui_HumidityLable, buffer);
            }
        });
    }


}
