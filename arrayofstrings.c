#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    //cars[0] = "Tesla"; - will not work on character based arrays, best method would be to use the strcpy function
    strcpy(cars[0], "Tesla"); // This is the correct way to replace elements in character based string arrays

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }


    return 0;
}