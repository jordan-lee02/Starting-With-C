#include <stdio.h>

int main(){

    // 2D array = an array, where each element is an entire array
    //              useful if you need a matric, grid, or table of data
    /*
    int numbers[2][3] = {               - 1 method for initialisation of a 2D array - essential to declare maximum number of elements in a row
                        {1, 2, 3},
                        {4, 5, 6}};
    */
    int numbers[3][3];      //- second method of declaring a 2D array

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    
    numbers[0][0] = 1;          // second method continued of initialisation of a 2D array
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }





    return 0;
}