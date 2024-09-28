#include <stdio.h>
#include <math.h>
#include "bits.h"

int main(){
    uint8_t val = 0b11110000; //240
    uint8_t mask = 0b0011010;
    uint8_t result = setBits_8(val, mask);
    uint8_t resultClear = clearBits_8(val, mask);
    uint8_t resultInverse = invertBits_8(val, mask);
    uint8_t logResult = logShift_8(val, 2, true);
    int8_t sVal = 0b11110000;
    int8_t arthResult = arthShift_8(sVal, 2, true);
    printf("%d", val);
    printf("\n");
    printf("%d",result);
    printf("\n");
    printf("%d",resultClear);
    printf("\n");
    printf("%d",resultInverse);
    printf("\n");
    printf("%d", logResult);
    printf("\n");
    printf("%d", arthResult);
    return 0;
}