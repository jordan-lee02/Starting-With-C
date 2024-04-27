#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge); // dereference 
}

int main(){

    // pointer = a "variable-like" reference that holds a memory address to another variable, array etc.
            //  some tasks are performed more easily with pointers
    //          * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL; // creates pointer variable assigned to the value of the address of variable 'age'
    pAge = &age;
    // printf("address of age: %p\n", &age); // '%p' - format specifier for hexadecimal address 'and' symbol refers to 'address of' and variable
    // printf("value of pAge: %p\n", pAge); // prints value of 'pAge' which will be the same as the address of age(above line)

    // printf("Size of age: %d bytes\n", sizeof(age)); // this will output 4 bytes as the value stored is an integer
    // printf("Size of pAge: %d bytes\n", sizeof(pAge)); // this will output 8 bytes for the pointer size as that is enough to store a hexadecimal address
    
    // printf("value of age: %d\n", age);
    // printf("value of age: %d\n", *pAge); //This will display the value at the stored address by de-referencing the pointer by using the indirection symbol '*' 

    printAge(pAge);
    


    return 0;
}