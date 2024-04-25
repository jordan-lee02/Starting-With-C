#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"



char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';
char playerindicator = ' ';
char computerindicator = ' ';

void gameTitle();
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

void gameRun(){

    char winner = ' ';
    char response;

    system("cls");
    do{
        winner = ' ';
        response = ' ';
        resetBoard();
        system("cls");
        Sleep(1000);
        gameTitle();
        Sleep(1000);
        int j = 3;
        do{
            system("cls");
            printf("\nGAME IS STARTING IN %d!", j);
            j--;
            Sleep(1000);
            if(j == 0){
                system("cls");
                printf("GO!");
                Sleep(1000);
                system("cls");
            }
        }while(j != 0);

        while(winner == ' ' && checkFreeSpaces() != 0){

        playerindicator = '*';
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0){

            break;

        }
        
        computerindicator = '*';
        printBoard();
        computerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0){

            break;

        }


    }

    printBoard();
    printWinner(winner);
    Sleep(250);
    system("cls");
    

    printf("Would you like to play again? (Y/N): ");
    scanf("%*c");
    //getchar();
    scanf("%c", &response);
    response = toupper(response);
    } while (response == 'Y');

    printf("Thanks for playing!");

}

void gameTitle(){

    printf("================\n");
    printf("|"ANSI_COLOR_MAGENTA"TicTacToe V1.0"ANSI_COLOR_RESET"|\n");
    printf("================\n");

}


void resetBoard(){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            board[i][j] = ' ';

        }

    }




}


void printBoard(){

    gameTitle();
    printf("PLAYER1: %c\n", playerindicator);
    printf("COMPUTER: %c\n", computerindicator);
    printf("\n   1   2   3 \n");
    printf("1  %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n  ---|---|---\n");
    printf("2  %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n  ---|---|---\n");
    printf("3  %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
    




}
int checkFreeSpaces(){

    int freeSpaces = 9;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            if(board[i][j] != ' '){

                freeSpaces--; 
            }
        
        
        }

    }
    return freeSpaces;



}
void playerMove(){

    int x;
    int y;

    do{
 
        Sleep(250);

        printf("Enter Column #(1-3): ");
        scanf("%d", &y);
        
        y--;

        printf("Enter Row #(1-3): ");
        scanf("%d", &x);
        system("cls");
        x--;

        if(board[x][y] != ' '){
            printBoard();
            printf("Invalid Move\n");

        }
        else{
            board[x][y]  =PLAYER;
            playerindicator = ' ';
            break;
        }
    }while(board[x][y] != ' ');



}
void computerMove(){

    //creates a seed based on current time
    srand(time(0));

    int x;
    int y;
    computerindicator = '*';

    if(checkFreeSpaces() > 0 ){

        do{

            x = rand() % 3;
            y = rand() % 3;

        } while(board[x][y] != ' ');

        Sleep(2500);
        board [x][y] = COMPUTER;
        computerindicator = ' ';

    }
    else{

        printWinner(' ');
    }




}
char checkWinner(){

    //check rows
    for(int i = 0; i < 3; i++){

        if(board[i][0] == board [i][1] && board[i][0] == board[i][2]){

          return board[i][0];

        }
    }
    //check columns
    for(int i = 0; i < 3; i++){

        if(board[0][i] == board [1][i] && board[0][i] == board[2][i]){

          return board[0][i];

        }
    }
    //check diagonals
    if(board[0][0] == board [1][1] && board[0][0] == board[2][2]){

        return board[0][0];

    }
    if(board[0][2] == board [1][1] && board[0][2] == board[2][0]){

        return board[0][2];

    }

    return ' ';




}
void printWinner(char winner){

    if(winner == PLAYER){

        printf("YOU WIN!!\n");
    }
    else if(winner == COMPUTER){

        printf("YOU LOSE!\n");
    }
    else{

        printf("IT'S A TIE!\n");
    }





}