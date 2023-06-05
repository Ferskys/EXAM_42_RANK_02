#include <stdio.h>

void print_bits(unsigned char octet)
{
    int i = 128; // 10000000 in binary, equivalent to 2^7

    while (i > 0)
    {
        if (octet & i)
            printf("1");
        else
            printf("0");
        i >>= 1; // Shift i one bit to the right
    }
}
