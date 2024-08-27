#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr1, *ptr2;

    ptr1 = malloc(sizeof(*ptr1));
    ptr2 = calloc(1, sizeof(*ptr2));
    //using the sizeof() operator is the best method to determine the exact size of memory needed to be reserved for the datatype
    return 0;
}