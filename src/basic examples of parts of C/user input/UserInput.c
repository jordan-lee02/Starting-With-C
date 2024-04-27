#include <stdio.h>
#include <string.h>


int main(){

    char name[25]; //25 byte limit
    int age;

    //asks the user for their name and stores the variable as a character array called name
    printf("\nWhat's your name?");
    //scanf("%s", &name);       //the scanf function will read up to any 'white space'
    fgets(name, 25, stdin);     // allows you to read after 'white space'  - stdin - standard input
    name[strlen(name)-1] = '\0';


    //ask the user for an input and store it as an integer variable named age
    printf("How old are you?");
    scanf("%d", &age);

    //output a statement including the character array name
    printf("\nHello %s, how are you?", name);

    //output a statement including the stored variable called age 
    printf("\nYou are %d years old.", age);

    return 0;


}