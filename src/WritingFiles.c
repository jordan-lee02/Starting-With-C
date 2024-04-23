#include <stdio.h>

int main(){


    
    FILE *pF = fopen("testwrite.txt", "w");

    fprintf(pF, "\nSpongebob Sqaurepants");

    fclose(pF);
    

   
//     if(remove("testwrite.txt") == 0){
//         printf("That file was deleted successfully");
//     }
//     else{
//     printf("That file was NOT deleted!");

    

//    }


    return 0;
}