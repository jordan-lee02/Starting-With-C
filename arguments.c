#include <stdio.h>

void birthday(char x[], int y){ //doesn't have to be the same name as variables passed through but same type and format
    
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);

}


int main(){

    char name[] = "Jordan";
    int age = 24;



    birthday(name, age); //pass- through variables into functions as arugments
   


    return 0;
}