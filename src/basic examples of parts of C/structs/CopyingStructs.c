#include <stdio.h>
#include <string.h>


//Create a structure call myStructure
struct myStructure{

    int myNum;
    char myLetter;
    char myString[30];
    
};



int main(){

    struct myStructure s1 = {13, 'B', "Some Text"};
    struct myStructure s2;

    s2 = s1;

    printf("Test number: %d", s2.myNum);
    


    return 0;
}