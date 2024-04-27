#include <stdio.h>

double square(double x){ //if using the function to return a variable, the function has to be declared by the variable type e.g. ,int ,double float,char instead of using void.

    return x * x;
}


int main(){ // this is delcared by int as we are returning 0 and the end of the function

    // return = returns a value back to a calling function 


    double x = square(3.14);
    printf("%lf", x);



    return 0;
}