#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //pseduo random numbers = A set of values/elements that are statistically random

    srand(time(0));

    int number1 = (rand() % 20) + 1; //delcares a random value for variable number1 between 1 and 20 
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);



    return 0;
}