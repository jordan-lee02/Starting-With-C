#include <stdio.h>
#include <stdbool.h>        //include this standard library header file to work with booleans inside your code

int main(){

    char a = 'C';           //single character - use %c format specifier to display single character
    char b[] = "Bro";       //array of characters - uses %s

    float c = 3.141592653589793;             // 4 bytes of memory - (32 bits of precision) store 6 - 7 significant digits uses %f
    double d = 3.141592653589793;     // 8 bytes of memory - (64 bits of precision) store between 15 - 16 significant digits uses %lf

    bool e = true;          //1 byte (true(1)/false(0)) uses %d

    char f = 120;               //1 byte (-128 to +127) %d or %c as storing a number value
    unsigned char g = 255;    //1 byte (0 to +255 due to unsigned fuinction ignoring negative numbers) %d or %c

    short h = 32767;        // 2 bytes (-32,768 to 32,767) use %d - can drop int when declaring as short
    unsigned short i = 65535; // 2bytes (0 to +65,535 as doubles due to discarding negative values) use %d


    int j = 2147483647;         // 4 bytes (-2,147,483,648 to +2,147,483,647) %d - technically int on its own is considered 'long int' in same way u dont put int down when using short
    unsigned int k = 4294967295;     // 4 bytes (0 to +4,294,967,295) %u


    long long int l = 9223372036854775807;          //8 bytes (-9quintillion to +9quintillion) %lld
    unsigned long long int m = 18446744073709551615U; //8 bytes (0 - +18 quintillion) %llu - to prevent warning when running add U to end of number



    
    //printf("%.15f\n", c);          //displays float
    //printf("%.15lf\n", d);         //displays double
    //printf("%d\n", e);              //displays boolean
    //printf("%d\n", f);              //displays char variable as numeric value
    //printf("%d\n", g);                //unsigned char as numeric value   
    //printf("%d\n", h);                //displays short int
    //printf("%d\n", i);                //displays unsigned short int
    //printf("%d\n", j);              //displays int
    //printf("%u\n", k);              //displays unsigned int
    printf("%lld\n", l);            //displays long long int
    printf("%llu\n", m);            //displays unsigned long long int
    


    return 0;
} 