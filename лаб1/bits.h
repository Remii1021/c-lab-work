#ifndef BITS_H
#define BITS_H

#include <stdint.h>
#include <stdbool.h>

uint8_t setBits_8(uint8_t value, uint8_t mask);
uint8_t clearBits_8(uint8_t value, uint8_t mask);
uint8_t invertBits_8(uint8_t value, uint8_t mask);
uint8_t logShift_8(uint8_t value, int shift, bool right);
int8_t arthShift_8(int8_t value, int shift, bool right);


#endif