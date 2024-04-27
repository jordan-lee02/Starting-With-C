#include <stdio.h>
#include <math.h>

int main(){
    
    double a;
    double b;
    double c;

    //welcome message
    printf("\nHello and Welcome to my Hypotenuse Calculator Program!\n");
    
    //asks user for input of side A
    printf("\nPlease enter side A: ");
    scanf("%lf", &a);

    //asks user for input of side B
    printf("Please enter side B: ");
    scanf("%lf", &b);

    //calculates the formula of the Hypotenuse and stores that value as c
    c = sqrt(a*a + b*b);


    //outputs the result
    printf("The Hypotenuse(Side C) is: %lf", c);

    return 0;
}