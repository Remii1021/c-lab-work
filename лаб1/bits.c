#include "bits.h"

uint8_t setBits_8(uint8_t value, uint8_t mask) {
    return value | mask;
}
uint8_t clearBits_8(uint8_t value, uint8_t mask) {
    return value & ~mask;
}
uint8_t invertBits_8(uint8_t value, uint8_t mask) {
    return value ^ mask;
}
uint8_t logShift_8(uint8_t value, int shift, bool right) {
    if(right) {
        return value >> shift;
    }
    else {
        return value << shift;
    }
}
int8_t arthShift_8(int8_t value, int shift, bool right) {
    if(right) {
        return value >> shift;
    }
    else {
        return value << shift;
    }
}