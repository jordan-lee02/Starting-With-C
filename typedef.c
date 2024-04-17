#include <stdio.h>
#include <string.h>

//typedef char user[25]; //outside of the main() function this will declare a character array with 25 bytes and be known as 'user' to reduce syntax

typedef struct{

    char name[25];
    char password[12];
    int id;

}User;



int main(){

    // typedef = resevred keyword that gives an existing datatype a "nickname"

    User user1 = {"Jordan","password123",123456789};
    User user2 = {"Sui","password321",987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);







    return 0;
}