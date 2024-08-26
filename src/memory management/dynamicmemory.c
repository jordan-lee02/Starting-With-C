#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr1, *ptr2;

    ptr1 = malloc(sizeof(*ptr1));
    ptr2 = calloc(1, sizeof(*ptr2));

    return 0;
}