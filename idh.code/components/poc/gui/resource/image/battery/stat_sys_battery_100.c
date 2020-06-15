#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_STAT_SYS_BATTERY_100
#define LV_ATTRIBUTE_IMG_STAT_SYS_BATTERY_100
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_STAT_SYS_BATTERY_100 uint8_t stat_sys_battery_100_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x03, 0x00, 0x00, 0x00, 0x9d, 0x3c, 0xf0, 
  0x8f, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x21, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfb, 
  0xfc, 0xee, 0xf6, 0xf9, 0xe8, 0xf3, 0xf7, 0x9f, 0xcd, 0xdf, 0x5a, 0xa5, 0xc3, 0x50, 0xa4, 0xc5, 
  0x4a, 0xa1, 0xc3, 0x4c, 0x9e, 0xbe, 0x40, 0x9b, 0xbf, 0x6c, 0xc1, 0x4f, 0x53, 0x00, 0x00, 0x00, 
  0x0b, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x7d, 0x76, 0x7d, 0xd5, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0a, 0xf0, 
  0x00, 0x00, 0x0a, 0xf0, 0x01, 0x42, 0xac, 0x34, 0x98, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 
  0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 
  0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 
  0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x00, 0x29, 0x49, 0x44, 0x41, 0x54, 0x08, 0x99, 0x63, 0x10, 
  0x34, 0x86, 0x00, 0x41, 0x06, 0xc1, 0xf4, 0x72, 0x10, 0xa8, 0x70, 0x64, 0x10, 0x9c, 0xb5, 0x0a, 
  0x0c, 0x90, 0x59, 0x56, 0xab, 0x88, 0x63, 0xa9, 0xae, 0xc2, 0xd4, 0x8b, 0xc4, 0x82, 0xd9, 0x06, 
  0x00, 0xda, 0xea, 0x33, 0xc3, 0xc4, 0xe0, 0x4d, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 
  0x44, 0xae, 0x42, 0x60, 0x82, 
};

const lv_img_dsc_t stat_sys_battery_100 = {
  .header.always_zero = 0,
  .header.w = 18,
  .header.h = 12,
  .data_size = 245,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = stat_sys_battery_100_map,
};
