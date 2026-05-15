/**
 * @file OpenScreen_gen.h
 */

#ifndef OPENSCREEN_H
#define OPENSCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "src/core/lv_obj_class_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/src/core/lv_obj_class_private.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * OpenScreen_create(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*OPENSCREEN_H*/