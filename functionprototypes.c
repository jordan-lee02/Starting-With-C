#include <stdio.h>


void hello(char[], int); //This is a function prototype and ensures calls to a function are made with the correct argument

int main(){

    // Function Prototype:
    //  Is a function declaration, w/o a body, before main()
    // ensures calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behaviour
    // A function prototype causes the compiler to flag an error if arguments are missing e.g needing two values and only inputing one

    // Advantages
    // 1. Easier to navigate a program w/main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files
    

    char name[] = "Jordan";
    int age = 24;

    hello(name, age);

    return 0;
}


void hello(char name[], int age){

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);

}