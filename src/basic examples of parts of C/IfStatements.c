#include <stdio.h>

int main(){

    //declare variables
    int age;
    
    //ask user for their age
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    //dependent on what number is entered and stored as 'age' the below conditions will ouput
    if(age >= 18){                                                                              //single '=' is an assingment, double '==' is comparison
        printf("You are now signed up!");                                                       
    }
    else if (age == 0){
        printf("You can't sign up as you have just been born!");
    }
    else if(age < 0){
        printf("Thats funny, you haven't been born yet :)");
    }
    else{
        printf("You are too young to sign up!"); 
    }


    return 0;
}