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
    printf("Исходное значение");
    printf("\n");
    printf("%d", val);
    printf("\n");
    printf("результат установки битов в единицы по маске");
    printf("\n");
    printf("%d",result);
    printf("\n");
    printf("результат установки битов в нули по маске");
    printf("\n");
    printf("%d",resultClear);
    printf("\n");
    printf("результат инверсии");
    printf("\n");
    printf("%d",resultInverse);
    printf("\n");
    printf("результат логического сдвига");
    printf("\n");
    printf("%d", logResult);
    printf("\n");
    printf("Исходное результат циклического сдвига");
    printf("\n");
    printf("%d", arthResult);
    return 0;
}
