#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};     //enums are constants can name as many as you need
                                                                            //can also assign them specific values like to the left

int main(){

    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable

    enum Day today = Sun;

    //printf("%d", today);    //enums are NOT STRINGS, but can be treated as int

    if(today == Sun || today == Sat){
        printf("\nIt's the weekend!\nParty time!\n");
    }
    else{
        printf("I have to work today :(\n");
    }
    
    return 0;
}