#ifndef _SENSORS_H
#define _SENSORS_H

#include <stdio.h>
#include <stdint.h>
#include <wiringPi.h>

uint8_t touch_pin = 8;
uint8_t touch_read = 0;
uint8_t LEDpin = 7;
uint8_t LEDread = 0;
uint8_t Motor_Pin1 = 9;
uint8_t Motor_Pin2 = 0;
uint8_t Motor_Pin3 = 2;
uint8_t Motor_Pin4 = 3;
uint16_t grad = 360;
uint16_t i,r; 


#endif // _SENSORS_H
