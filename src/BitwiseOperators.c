#include <stdio.h>

int main(){

    /* BITWISE OPERATORS = Special operators used in bit level programming
                          (knowing binary is important for this topic)
    
    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    */

    int x = 6;   // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;   // 0 = 00000000

    z = x & y; // both numbers have to have equal bis in each column
    printf("AND = %d\n", z); // 00000100 = 4

    z = x | y; // either 2 or just 1 bit when adding
    printf("OR = %d\n", z); // 00001110 = 14

    z = x ^ y; //XOR - only single bit can be accepted when adding
    printf("XOR = %d\n", z); // 00001010 = 10

    z = x << 2; // moves n amount of binary digits to the left
    printf("LEFT SHIFT = %d\n", z); // 00011000 = 24

    z = x >> 1; // moves n amount of binary digits to the right
    printf("RIGHT SHIFT = %d\n", z); // 00000011 = 3








    return 0;
}