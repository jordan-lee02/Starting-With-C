#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = || checks if atleast on conditon is true

    float temp = 25;

    if(temp <= 0 || temp >= 30 ){
        printf("\nThe Weather is bad!");
    }
    else{
        printf("The Weather is good!");
    }




    return 0;
}