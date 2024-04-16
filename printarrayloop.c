#include <stdio.h>

int main(){

    
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    for(int i = 0; i < sizeof(prices)/sizeof(double); i++ ){ // 'sizeof' gets the byte size of the array 
        printf("$%.2lf\n", prices[i]);   // - this is then divided by the size of the delcared array value type to result in length of the array
    }

    return 0;
}