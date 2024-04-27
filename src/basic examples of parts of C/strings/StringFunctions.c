#include <stdio.h>
#include <string.h>

int main (){
    
    char string1[] = "Lordan";
    char string2[] = "Lee";

    //strlwr(string1);                        //converts a string to lowercase
    //strupr(string1);                        //converts a string to uppercase
    //strcat(string1, string2);               //appends string2 to the end of string1
    //strncat(string1, string2, 1);             //appends n characters from string2 to string1
    //strcpy(string2, string1);                   //copy string2 to string1
    //strncpy(string1, string2, 3);              //copy n numbers for string2 to string1

    //strset(string1, '?');                   //sets all characters of a string to a given character
    //strnset(string1, 'x', 1);                  //sets first n character of a string to a given character
    //strrev(string1);                        //reverses a string

    //int result = strlen(string1);           //returns the string length as an int
    //int result = strcmp(string1, string2);      //string compare of characters - return 0 if all same, 1 if different
    //int result = strncmp(string1, string2, 1);   //Compares n amount of characters same output as previous above
    //int result = strcmpi(string1, string2);     //compares strings but ignores case sensitivity
    int result = strnicmp(string1, string2, 1);    //compares n amount of characters but ignores case sensitivty

    //printf("%d", result);

    if (result == 0){
        printf("\nThese strings are the same!");
    }
    else{
        printf("\nThese strings are not the same!");
    }

    return 0;
}