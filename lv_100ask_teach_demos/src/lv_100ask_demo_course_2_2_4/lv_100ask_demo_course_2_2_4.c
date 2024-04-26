/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_2_2_4.c
 * @author  百问科技
 * @version V1.0
 * @date    2021-12-29
 * @brief	2_2_4课的课堂代码
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2021-12-29     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 深圳百问网科技有限公司<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if LV_USE_100ASK_DEMO_COURSE_2_2_4

#include "lv_100ask_demo_course_2_2_4.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/


void lv_100ask_demo_course_2_2_4(void)
{
    lv_obj_t * obj1 = lv_obj_create(lv_scr_act());
    lv_obj_align(obj1, LV_ALIGN_CENTER, 0, 0);
    //lv_obj_set_style_border_width(obj1, 10, 0);
    //lv_obj_set_style_outline_width(obj1, 10, 0);

#if 0
    lv_obj_t * obj2 = lv_obj_create(lv_scr_act());
    lv_obj_t * obj_out_top = lv_obj_create(lv_scr_act());
    lv_obj_t * obj_out_bottom = lv_obj_create(lv_scr_act());
    lv_obj_t * obj_out_left = lv_obj_create(lv_scr_act());
    lv_obj_t * obj_out_right = lv_obj_create(lv_scr_act());
    //lv_obj_set_style_outline_width(obj_out_left, 10, 0);

    lv_obj_align(obj1, LV_ALIGN_CENTER, 0, 0);
    lv_obj_align_to(obj_out_top, obj1, LV_ALIGN_OUT_TOP_MID, 0, 0);
    lv_obj_align_to(obj_out_bottom, obj1, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);
    lv_obj_align_to(obj_out_left, obj1, LV_ALIGN_OUT_LEFT_MID, 0, 0);
    lv_obj_align_to(obj_out_right, obj1, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_align_to(obj2, obj_out_right, LV_ALIGN_OUT_TOP_MID, 0, 0);
#endif
}

//学习使用
void chen_learn_2_2_4(void)
{
    lv_obj_t *box1 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(box1, 100, 100);
    lv_obj_set_align(box1, LV_ALIGN_CENTER);
    lv_obj_set_style_border_width( box1, 10, 0);

    lv_obj_t *box2 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(box2, 100, 100);
    lv_obj_align_to(box2, box1, LV_ALIGN_OUT_TOP_MID, 0, 0);

    lv_obj_t *box3 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(box3, 100, 100);
    lv_obj_align_to(box3, box1, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);

    lv_obj_t *box4 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(box4, 50, 50);
    lv_obj_align_to( box4, box1, LV_ALIGN_CENTER, 0, 0);
}
#endif /* LV_USE_100ASK_DEMO_COURSE_2_2_4 */
