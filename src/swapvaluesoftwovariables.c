#include <stdio.h>
#include <string.h>

int main(){

    char x[15] = "Water";
    char y[15] = "Soda";
    char temp[15];

    strcpy(temp, x);  //if using the strcpy function to swap strings, both strings need to be of same length otherwise bigger into small will not work
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);





    return 0;
}