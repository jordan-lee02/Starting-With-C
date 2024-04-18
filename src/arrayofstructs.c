#include <stdio.h>
#include <string.h>

typedef struct{

    char name[12];
    float gpa;

}Student;       //used the typdef function to give the nickname of student

int main(){

    Student student1 = {"Spongebob", 3.0}; //declaring rariables using the 'nickname' referenced before the start of main()
    Student student2 = {"Patrick", 2.5};
    Student student3 = {"Sandy", 4.0};
    Student student4 = {"Squidward", 2.0};

    Student students[] = {student1, student2, student3, student4}; //storing declared variables inside of an array named students

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%-12s\t", students[i].name);        //cycling through each students name and displaying their respective GPA alongside this
        printf("%.2f\n", students[i].gpa);
    }





    return 0;
}