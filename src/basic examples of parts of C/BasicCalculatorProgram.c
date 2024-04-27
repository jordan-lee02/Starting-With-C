#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nPlease enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Please enter number 1: ");
    scanf("%lf", &num1);

    printf("Please enter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nResult is: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult is: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult is: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nResult is: %lf", result);
            break;        
        default:
            printf("%c is not valid", operator);

    }

    return 0;
}