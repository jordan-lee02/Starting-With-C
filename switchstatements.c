#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nPlease enter a Letter Grade: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect!\n");
            break; //this allows the code to break out of the switch and exit
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it wasn't an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!!!\n");
            break;
        default:
            printf("Please enter only valid Letter Grades!");
            break;
    }
    return 0;          
}

