#include <stdio.h>

int main(){

    //continue = skipts rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for(int i = 1; i <=20; i++){
        if(i == 13){
            continue; //skips the rest of a section of code ,missing the output of 13, and forces next iteration of loop
        }
        else{
            printf("%d\n", i);
        }
    }
    
    
    
    return 0;
}