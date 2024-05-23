#include <stdio.h>
#include <string.h>


//Create a structure call myStructure
struct myStructure{

    int myNum;
    char myLetter;
    char myString[30];
    
};



int main(){


    //Create a structure variable of myStructure called s1 and assigns values to it in one line
    struct myStructure s1 = {13, 'B', "Some Text"};
    //Note: the order of the inserted values must match the order of the variables declared in the structure

    //Modify Values after assigning
    // s1.myNum = 30;
    // s1.myLetter = 'C';
    // strcpy(s1.myString, "Something else");


    //Create another struct variable
    struct myStructure s2;

    //Copy s1 values to s2
    s2 = s1;

    //Change s2 values
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");



    //Print values
    printf("My Number: %d\nMy Letter: %c\nMy String: %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("My Number: %d\nMy Letter: %c\nMy String: %s\n", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}