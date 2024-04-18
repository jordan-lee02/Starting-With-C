#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double diameter;
    double area;

    //ask user for a radius input and store under variable radius
    printf("\nPlease enter a radius of a circle: ");
    scanf("%lf", &radius);

    //assign the value of raidus *2 to diameter
    diameter = radius * 2;
    //printf("\nDiameter Check:%lf",diameter);

    //assign the value result of the cirumference to value circumference
    circumference = PI * diameter;
    
    //assign result of area calculation to value area
    area = PI * radius * radius;

    //output results of both calculations to user
    printf("\nThe Circumference of your circle is: %lf", circumference);
    printf("\nThe Area of your circle is: %lf", area);







    return 0;
}