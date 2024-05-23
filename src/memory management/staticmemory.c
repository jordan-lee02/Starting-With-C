#include <stdio.h>

int main(){

    //Defining a string of integers with a size of 20
    int students[20];

    printf("%lu", sizeof(students));
    //This will output 80 bytes as an integer is 4 bytes and the string is a length of 20 so 4 * 20 = 80 

    return 0;
}