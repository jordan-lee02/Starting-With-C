#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int guessnum(int,int);
void restart();


void game(){

    srand(time(0));
    int guess;
    int randomnum = (rand() % 100) + 1; //declares a randomly generated number between 1 and 100 and stores the value under variable randomnum
    printf("\n------------------------------------------\n");
    printf("Hello and welcome to...GUESS THE NUMBER!!!\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("My number is between 1 and 100, Please enter your guess: ");
    scanf("%d", &guess);
    while(guess > 100 || guess < 1){
        printf("Please enter a valid guess between 1 and 100!");
        scanf("%d", &guess);
    }

    int tries = guessnum(randomnum, guess);

    printf("\nThats correct!\nMy number was %d!\nThis took you %d guesses", randomnum, tries);
    restart();

}

int guessnum(int randomnum, int guess){
    int guesses = 1;
    //printf("%d", guess);
    while(guess != randomnum){
        if(guess > randomnum){
            printf("%d\n", guesses);
            printf("You are too high!\nTry and guess a smaller number: ");
            scanf("%d", &guess);
        }
        else if(guess < randomnum){
            printf("%d\n", guesses);
            printf("You are too low!\nTry and guess a bigger number: ");
            scanf("%d", &guess);
        }
        guesses++;
        
        
    }
    printf("%d\n", guesses);
    return guesses;
}

void restart(){

    char playagain[10];
    bool retry = false;

    while(retry == false){
        printf("\nWant to try again?(Y/N): ");
        scanf("%s", &playagain);
        strupr(playagain);
        printf("%s", playagain);
        if(strcmp(playagain,"Y") == 0){
            retry = true;
            printf("\nYou got em");
            continue;
        }
        else if(strcmp(playagain,"N") == 0){
            break;
        }
        else{
            printf("\nPlease enter either Y/N !!!\n");
        }
    }
    if(retry){
        game();
    }
    

}


int main(){

    game();
    

    return 0;
}