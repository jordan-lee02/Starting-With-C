#include <stdio.h>

int main(){
    

    //variable = Allocated space in memory to store a value.
    
    //declaring a variable
    int x;

    //initialization of a variable
    x = 123;
    //combination of initialisation and declaration
    int y = 321;

    int age = 21; //integer
    float gpa = 2.05; //floating point(decimal) number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %.2f\n",gpa);

    return 0;
} 