#include <stdio.h>
#include <string.h>

char *getName(char[]);

int main(){

    // While loops = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true.
    //a while loop might not execute at all dependant on the condition it has.

    char name[25];

    getName(name);

    while(strlen(name) == 0){
        printf("You did not enter your name!");
        getName(name);

    }

    printf("Hello %s", name);
    return 0;
}

char *getName(char name[25]){

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    return name;
    

}