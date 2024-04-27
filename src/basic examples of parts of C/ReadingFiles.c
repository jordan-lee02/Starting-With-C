#include <stdio.h>

int main(){

   FILE *pF = fopen("C:\\Users\\Jorda\\Desktop\\poem.txt", "r");

   char buffer[255];

   if(pF == NULL){      //This will check if the file exists and if it doesn't it will return 'NULL' which will then output that it was unable to open the file.
    
    printf("Unable to open file!\n");
   }
   else{
    
    while(fgets(buffer, 255, pF) != NULL){ //This loop will continue until the 'fgets' function returns NULL signalling that every line has been read.
        
        printf("%s", buffer);
    }
   }

   fclose(pF); 


    return 0;
}