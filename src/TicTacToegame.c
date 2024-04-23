#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';




void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
void checkWinner();
void printWinner(char);

int main(){

    char winner = ' ';

    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0){

        printBoard();

        playerMove();

    }
    
    
    return 0;
}


void resetBoard(){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            board[i][j] = ' ';

        }

    }




}


void printBoard(){

    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
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
        printf("Enter Row #(1-3): ");
        scanf("%d", &x);
        x--;

        printf("Enter Column #(1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' '){
            printf("Invalid Move");
        }
        else{
            board[x][y]  =PLAYER;
            break;
        }
    }while(board[x][y] != ' ');



}
void computerMove(){




}
void checkWinner(){




}
void printWinner(char winner){





}