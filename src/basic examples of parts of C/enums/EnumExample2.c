#include <stdio.h>


//Creating an Enum named 'Level'
enum Level{
    LOW,
    MEDIUM,
    HIGH
};
//Good practice to use uppercase as these are constant data types
//Enum is short for "enumerations", which means "specifically listed"


int main(){

    //Create Enum variable and assigns a value to it
    enum Level myVar = MEDIUM;

    //By default will output '1' when the format specifier is an integer as this is the second value.
    //The second value, like Strings, have a value of 1 as the first value starts from 0.
    printf("%d", myVar);

    return 0;
}