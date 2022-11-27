#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_CARET_DOWN
#define LV_ATTRIBUTE_IMG_IMG_CARET_DOWN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_CARET_DOWN uint8_t img_caret_down_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
  0x49, 0x00, 0x49, 0x04, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x25, 0x08, 0x49, 0x08, 0x92, 0x00, 
  0x00, 0x00, 0x00, 0xec, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xf0, 0x00, 0x74, 
  0x00, 0x00, 0x00, 0x83, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xd0, 0x24, 0x27, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xd3, 0x24, 0x27, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x87, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xd4, 0x24, 0x27, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x87, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xd7, 0x24, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x88, 0x00, 0xff, 0x00, 0xd8, 0x24, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x03, 0x00, 0x5f, 0x24, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0x29, 0x4a, 0x00, 0x28, 0x42, 0x04, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x65, 0x29, 0x08, 0x86, 0x31, 0x08, 0x10, 0x84, 0x00, 
  0x21, 0x08, 0x00, 0x21, 0x08, 0xec, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xf0, 0x41, 0x08, 0x74, 
  0x41, 0x08, 0x00, 0x41, 0x08, 0x83, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xd0, 0xa2, 0x10, 0x27, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x84, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xd3, 0xa2, 0x10, 0x27, 0x00, 0x00, 0x00, 
  0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x10, 0x00, 0x41, 0x08, 0x87, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xd4, 0xa2, 0x10, 0x27, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x82, 0x10, 0x03, 0x41, 0x08, 0x87, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xd7, 0xa2, 0x10, 0x28, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x62, 0x10, 0x03, 0x41, 0x08, 0x88, 0x00, 0x00, 0xff, 0x00, 0x00, 0xd8, 0x82, 0x10, 0x28, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x10, 0x03, 0x62, 0x10, 0x5f, 0x82, 0x10, 0x2c, 0x00, 0x00, 0x00, 0x61, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x4a, 0x29, 0x00, 0x42, 0x28, 0x04, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x29, 0x65, 0x08, 0x31, 0x86, 0x08, 0x84, 0x10, 0x00, 
  0x08, 0x21, 0x00, 0x08, 0x21, 0xec, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xf0, 0x08, 0x41, 0x74, 
  0x08, 0x41, 0x00, 0x08, 0x41, 0x83, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xd0, 0x10, 0xa2, 0x27, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0x84, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xd3, 0x10, 0xa2, 0x27, 0x00, 0x00, 0x00, 
  0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa2, 0x00, 0x08, 0x41, 0x87, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xd4, 0x10, 0xa2, 0x27, 0x00, 0x00, 0x00, 0x10, 0x62, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x10, 0x82, 0x03, 0x08, 0x41, 0x87, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xd7, 0x10, 0xa2, 0x28, 0x00, 0x00, 0x00, 0x10, 0x62, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x10, 0x62, 0x03, 0x08, 0x41, 0x88, 0x00, 0x00, 0xff, 0x00, 0x00, 0xd8, 0x10, 0x82, 0x28, 0x00, 0x00, 0x00, 0x10, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa2, 0x03, 0x10, 0x62, 0x5f, 0x10, 0x82, 0x2c, 0x00, 0x00, 0x00, 0x08, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/
  0x46, 0x46, 0x46, 0x00, 0x44, 0x44, 0x44, 0x04, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x2c, 0x2c, 0x2c, 0x08, 0x31, 0x31, 0x31, 0x08, 0x82, 0x82, 0x82, 0x00, 
  0x06, 0x06, 0x06, 0x00, 0x06, 0x06, 0x06, 0xec, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x01, 0x01, 0x01, 0xff, 0x02, 0x02, 0x02, 0xf0, 0x0a, 0x0a, 0x0a, 0x74, 
  0x0a, 0x0a, 0x0a, 0x00, 0x0a, 0x0a, 0x0a, 0x83, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xd0, 0x14, 0x14, 0x14, 0x27, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x84, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xd3, 0x13, 0x13, 0x13, 0x27, 0x00, 0x00, 0x00, 0x00, 
  0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x13, 0x13, 0x00, 0x0a, 0x0a, 0x0a, 0x87, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0xd4, 0x13, 0x13, 0x13, 0x27, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0d, 0x0d, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x03, 0x09, 0x09, 0x09, 0x87, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xd7, 0x13, 0x13, 0x13, 0x28, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0d, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0d, 0x0d, 0x03, 0x08, 0x08, 0x08, 0x88, 0x00, 0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0xd8, 0x12, 0x12, 0x12, 0x28, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0d, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x13, 0x13, 0x03, 0x0d, 0x0d, 0x0d, 0x5f, 0x12, 0x12, 0x12, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t img_caret_down = {
  .header.always_zero = 0,
  .header.w = 13,
  .header.h = 8,
  .data_size = 104 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = img_caret_down_map,
};

