#ifndef __OV7740_H
#define __OV7740_H

#pragma once

#include "sensor.h"
#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

#define OV7740_SET_MIRROR(r, x)   ((r&0xBF)|((x&1)<<6))
#define OV7740_SET_FLIP(r, x)     ((r&0x7F)|((x&1)<<7))
#define OV7740_SET_SP(r, x)       ((r&0xEE)|((x&1)<<4)|(x&1))


int ov7740_init(sensor_t *sensor);

#ifdef __cplusplus
}
#endif

#endif
