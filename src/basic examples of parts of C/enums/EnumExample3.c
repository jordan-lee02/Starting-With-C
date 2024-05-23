#include <stdio.h>


//Creating an Enum named 'Level'
enum Level{
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};
//Good practice to use uppercase as these are constant data types
//Enum is short for "enumerations", which means "specifically listed"


int main(){

    //Create Enum variable and assigns a value to it
    enum Level myVar = MEDIUM;

    //This will now output 50 as we have specified an integer value
    //This would also be the same if we only assinged a value to one of the items as the next items would then update their numbers accordingly e.g delcared first item as '5', the next item default to '6' etc
    printf("%d", myVar);
    

    return 0;
}