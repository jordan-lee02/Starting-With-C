#include <stdio.h>
#include <string.h>


//Create a structure call myStructure
struct myStructure{

    int myNum;
    char myLetter;
    char myString[30];
    
};



int main(){


    //Create a structure variable of myStructure called s1
    struct myStructure s1;

    //Assigns values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    

    //When assigning a string value using a struct, you have to use the strcpy function
    strcpy(s1.myString, "Some text");
    

    //Print values
    printf("My Number: %d\n", s1.myNum);
    printf("My Letter: %c\n", s1.myLetter);
    printf("My String: %s\n", s1.myString);
    



    return 0;
}