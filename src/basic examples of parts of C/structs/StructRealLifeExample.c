#include <stdio.h>
#include <string.h>


//Create a structure call myStructure
struct Car{

    char brand[50];
    char model[50];
    int year;
    
};



int main(){
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"FORD", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    printf("\nBrand: %s\nModel: %s\nYear of manufacture: %d\n", car1.brand, car1.model, car1.year);
    printf("\nBrand: %s\nModel: %s\nYear of manufacture: %d\n", car2.brand, car2.model, car2.year);
    printf("\nBrand: %s\nModel: %s\nYear of manufacture: %d\n\n", car3.brand, car3.model, car3.year);






    return 0;
}