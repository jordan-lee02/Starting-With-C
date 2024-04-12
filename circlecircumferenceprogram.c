#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double diameter;
    double area;


    printf("\nPlease enter a radius of a circle:");
    scanf("%lf", &radius);

    diameter = radius * 2;
    //printf("\nDiameter Check:%lf",diameter);

    circumference = PI * diameter;
    area = PI * radius * radius;

    printf("\nThe Circumference of your circle is: %lf", circumference);
    printf("\nThe Area of your circle is: %lf", area);







    return 0;
}