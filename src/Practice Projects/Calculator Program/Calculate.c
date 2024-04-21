#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>


static void calculate(char[]);
static double runcalop(double, double, char[]);
static void restart();
static void calhome();


void startcalculator(){

    //start up welcome message
    printf("............................\n");
    sleep(1);
    printf("Terminal Calculator Program\n");
    sleep(1);
    printf("............................\n");
    sleep(1);

    calhome();

}

static void calhome(){
    //delcare calculation variable to store user input
    char calculation[20] = "";

    printf("\n****HOME****\n");
    sleep(1);
    printf("\nAvailable operations are:\t+\t-\t*\t/\t%%\n");
    sleep(1);

    //ask user for input and assign to string calculation
    printf("\nPlease enter your calculation in the format number space operator space number e.g(2 * 2): ");
    fgets(calculation, 20, stdin);
    
    calculate(calculation);


}

static void calculate(char calculation[20]){
    
    char num1[10];
    char num2[10];
    char operation[10];

    int counter = 1;

    for(char *sep = strtok(calculation, " ");sep != NULL;sep = strtok(NULL, " ")){
        //printf("%s\n", sep);
        switch(counter){
            
            case 1:
            strcpy(num1, sep);
            //printf("num1: %s\n", num1);
            break;

            case 2:
            strcpy(operation, sep);
            //printf("operation: %s\n", operation);
            break;
            
            case 3:
            strcpy(num2, sep);
            //printf("num2: %s\n", num2);
            break;

        }
        counter++;
    
    }

    //converts the user's numbers from strings into double variables in order for the calculation to work
     double dblnum1 = atof(num1);
     double dblnum2 = atof(num2);

     double answer = runcalop(dblnum1, dblnum2, operation);

     printf("\n-----------------\n");
     printf("ANSWER: %lf\n", answer);
     printf("-----------------\n");

     restart();

  
}

static double runcalop(double num1, double num2, char operation[10]){
    double answer;
    //printf("I made it to the last function!!!");
    switch (operation[0]){
        case '+':
        //printf("\nAddition!\n");
        answer = num1 + num2;
        break;

        case '-':
        //printf("\nSubtraction!\n");
        answer = num1 - num2;
        break;

        case '*':
        //printf("\nMultiplication!\n");
        answer = num1 * num2;
        break;

        case '/':
        //printf("\nDivsion!\n");
        answer = num1 / num2;
        break;

        case '%':
        //printf("\nModulus!\n");
        answer = fmod(num1,num2);
        break;



    }


    return answer;
}
static void restart(){
    char choice[2];
    bool startover = false;

    sleep(1);
    while(startover == false){
    printf("\nWould you like to try another calculation?(Y/N): ");
    scanf("%s", &choice);
    strupr(choice);

    if(strcmp(choice,"Y") == 0){
            startover = true;
            continue;
        }
        else if(strcmp(choice,"N") == 0){
            break;
        }
        else{
            printf("\nPlease enter either Y/N !!!");
        }
    }
    if(startover){
        getchar();
        calhome();
    }
    else{
        printf("Thankyou for using the calculator\nHave a nice day :)");
        sleep(1);
        printf("\nGoodbye.");
    }

}