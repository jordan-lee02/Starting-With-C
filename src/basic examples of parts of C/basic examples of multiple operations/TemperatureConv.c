#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nWelcome to a temperature conversion program!\n");
    
    printf("\nIs the temperature in (C) or (F)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); //this converts the unit variable to uppercase. The oppostie is tolower()

    if(unit == 'C'){
        //printf("You have selected Celcius");
        printf("Enter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; //formula to convert Celicus to Farenheit
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        //printf("You have selected Farenheit");
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9; //formula to convert Celcius to Farenheit
        printf("\nThe temp in Celcius is: %.1f", temp);
    }
    else{
        printf("\n%c is not a valid unit of measurement!", unit);

    }

    return 0;
}