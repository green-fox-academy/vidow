#include <stdio.h>
#include <stdint.h>

struct Bitfield{
    uint8_t boolean_value_1:1;
    uint8_t boolean_value_2:1;
    uint8_t boolean_value_3:1;
    uint8_t boolean_value_4:1;
    uint8_t boolean_value_5:1;
    uint8_t boolean_value_6:1;
    uint8_t boolean_value_7:1;
    uint8_t boolean_value_8:1;
} BF;

struct NotBitfield{
    uint8_t boolean_value_1;
    uint8_t boolean_value_2;
    uint8_t boolean_value_3;
    uint8_t boolean_value_4;
    uint8_t boolean_value_5;
    uint8_t boolean_value_6;
    uint8_t boolean_value_7;
    uint8_t boolean_value_8;
} NBF;

int main() {
    // TODO:
    // Print out the size of both structs (use sizeof() function)

    struct Bitfield BF; //It can be defined also as BF as in line 13.
    struct NotBitfield NBF; //It can be defined also as NBF as in line 24.

    printf("%d\n", sizeof(BF));
    printf("%d\n", sizeof(NBF));

    return 0;
}
