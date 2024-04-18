#include <stdio.h>

int main(){

    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nPlease enter no. of rows: ");
    scanf("%d", &rows);

    printf("Please enter no. of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Please enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i<= rows; i++){

        for(int j = 1; j <= columns; j++){  //to complete one iteration of the outer loop, you have to first complete all iterations of the inner loop
            printf("%c", symbol);
        }
        printf("\n");
    }




    return 0;  
}