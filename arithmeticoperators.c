#include <stdio.h>

int main(){

    //arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus) - gives the remainder of every division e.g. 13/10 = 3
    // ++ (increment)
    // -- (decrement)

    int x = 4;
    int y = 2;

    //int z = x + y;
    //int z = x - y;
    //int z = x * y;
    //float z = x / (float) y;        // to be able to divide correctly that will result in a decimal u need to convert the divder into either a float/double can be done here or on declaration
    //int z = x % y;

    x++;
    y--;

    printf("%d", y);


    return 0;

}