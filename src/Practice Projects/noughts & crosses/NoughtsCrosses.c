//This includes all header files that need to be called upon for certain functions to work in the code
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>


//This allows for the use of colours inside the terminal
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


//Declaring global variables.
char board[3][3];
// const char PLAYER = 'X';
// const char COMPUTER = 'O';
char PLAYER = ' ';
char COMPUTER = ' ';
char playerindicator = ' ';
char computerindicator = ' ';
int r;
int c;
bool computerStart = false;


//Function prototypes declared here to avoid errors or warnings appearing when running the code
void gameTitle();
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
void playerIndicatorColour(int, int);
void playercolour();
void computercolour();
void pDesignator();
void cDesignator();
void runPIC();
char replay(char);
void playersidechoice();
char headsOrTails();
void gameRun();


int main(){

    //Calls the function to start the game
    gameRun();




    return 0;
}

//This is the main function of the game where all other functions are called originally from to play noughts & crosses
void gameRun(){

    //Declaring variables
    char winner = ' ';
    char response;

    //Sleep(1000000);
    //This allows for the game's output to be more immersive and less cluttered by clearing the terminal
    system("cls");

    //This outer do while loop allows for the code to run dependent on the user input of 'y' to play again
    do{
        //Resets the game back to default starting settings and clears console
        winner = ' ';
        response = ' ';
        resetBoard();
        system("cls");
        //Made use of the Sleep function from 'windows.h' to allow the program to slow down in places to help add to the immersion
        Sleep(1000);

        //This calls a function to display the game's title
        gameTitle();
        Sleep(1000);
        int j = 3;
        playersidechoice();

        //This loop is a countdown made for the start of the game and will continue to run until j is equal to 0
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

        //While loop allows for a function to display the board to be called along with allowing for the player to take their respective turn
        //This will repeat until both the variable 'winner and the function 'checkFreeSpaces' return 0. 
        while(winner == ' ' && checkFreeSpaces() != 0){
        
        //this assigns an asterix to playerindicator to then be displayed when the board updates to signify who's current turn it is.
        if(computerStart != true){
            playerindicator = '*';
            printBoard();
            playerMove();

        }
        
        
        //assigning the returned value of the called function 'check Winner' to the character variable 'winner'
        winner = checkWinner();

        //this if statement checks if the number of available spaces left on the board is zero and then it will break out of the statement, stopping any further turns from the user or computer
        if(winner != ' ' || checkFreeSpaces() == 0){

            break;

        }
        system("cls");
        computerindicator = '*';
        printBoard();
        computerMove();
        //checking for a winner after the move function for the computer has been called
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0){

            break;

        }
    }

    printBoard();
    printWinner(winner);
    Sleep(250);   

    //asks the user if they would like to play again, converts the user input to capitals to prevent errors occuring

    response = replay(response);
    
    } while (response == 'Y');

    printf("Thanks for playing!");
}

char replay(char response){
    bool validinput = false;
    while(validinput == false){
        printf("\nWould you like to play again? (Y/N): ");
        scanf("%*c");
        scanf("%c", &response);
        response = toupper(response);
        if(response == 'Y' || response == 'N'){
            validinput = true;
            }
        else{
            printf("PLEASE ENTER EITHER Y/N!!!");
        }
            }
    return response;
}

void gameTitle(){

    printf("========================\n");
    printf("|"ANSI_COLOR_MAGENTA"NOUGHTS & CROSSES V1.0"ANSI_COLOR_RESET"|\n");
    printf("========================\n");

}

void resetBoard(){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            board[i][j] = ' ';

        }

    }
}

void printBoard(){    

    r = 0;
    c = 0;
    //displays title along with player and computer with a designator of who's move it is currently
    gameTitle();
    playercolour();
    //printf(ANSI_COLOR_RED);
    //printf("PLAYER1: ");
    pDesignator();
    computercolour();
    // printf(ANSI_COLOR_GREEN);
    // printf("COMPUTER: ");
    cDesignator();

    //row 1 display
    printf(ANSI_COLOR_RESET);
    printf("\n   1   2   3 \n");
    printf("1  ");
    runPIC();


    //row 2 display
    r = 1;
    c = 0;
    printf("\n  ---|---|---\n");
    printf("2  ");
    runPIC();
    
    //row 3 display
    r = 2;
    c = 0;
    printf("\n  ---|---|---\n");
    printf("3  ");
    runPIC();

    printf("\n");
}
void playercolour(){
    if (PLAYER == 'X'){
        printf(ANSI_COLOR_RED);
    }
    else{
        printf(ANSI_COLOR_GREEN);
    }
    printf("PLAYER: ");

}
void computercolour(){
    if(COMPUTER == 'X'){
        printf(ANSI_COLOR_RED);
    }
    else{
        printf(ANSI_COLOR_GREEN);
    }
    printf("COMPUTER: ");

}
void runPIC(){

    for(int i = 0 ; i < 3; i++){
        playerIndicatorColour(r , c);
    }
}
void pDesignator(){
    printf(ANSI_COLOR_YELLOW"%c\n", playerindicator);
}
void cDesignator(){
    printf(ANSI_COLOR_YELLOW"%c\n", computerindicator);
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
            Sleep(500);
            system("cls");
            printBoard();
            

        }
        else{
            board[x][y]  =PLAYER;
            playerindicator = ' ';
            break;
        }
    }while(board[x][y] != ' ');
}
void computerMove(){

    computerStart = false;
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

        printf("COMPUTER IS CHOOSING\n");
        Sleep(1250);
        system("cls");
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
        Sleep(250);
    }
    else if(winner == COMPUTER){

        printf("YOU LOSE!\n");
        Sleep(250);
    }
    else{

        printf("IT'S A TIE!\n");
        Sleep(250);
    }
}
void playerIndicatorColour(int i, int j){
    
    c = j;

    if (board[i][j] == 'O'){
        printf(ANSI_COLOR_GREEN);
        printf("%c", board[i][j]);
        printf(ANSI_COLOR_RESET);
        c++;
        if(j == 0 || j == 1){
            printf(" | ");
        }

        }
    else if(board[i][j] == 'X'){
        printf(ANSI_COLOR_RED);
        printf("%c", board[i][j]);
        printf(ANSI_COLOR_RESET);
        c++;
        if(j == 0 || j == 1){
            printf(" | ");
        }
    }
    else{
        printf("%c", board[i][j]);
        c++;
        if(j == 0 || j == 1){
            printf(" | ");
        }
    }
}
void playersidechoice(){
    system("cls");
    printf("Before we get started however...\n");
    Sleep(2000);
    system("cls");
    printf("In order for this game to be a fair fight\n");
    Sleep(1000);
    printf("We have to decide who is playing as X's or O's\n");
    Sleep(2000);
    printf("With X's being the one who starts first ;)\n");
    Sleep(2000);
    printf("So why don't we start off with a quick game of heads or tails\n");
    Sleep(2000);
    system("cls");
    headsOrTails();
}

char headsOrTails(){
    char decider;
    int decidernum;
    char coinanimation[] = {'-', '\\', '|', '/', '-', '\\', '|', '/', '-'};
    int count = 3;
    bool advance = false;
    printf("^^^^^^^^^^^^^^\n");
    printf("Heads or tails\n");
    printf("^^^^^^^^^^^^^^\n");
    Sleep(2000);
    printf("\n*BEST OUT OF 1*");
    Sleep(2000);
    system("cls");
    do{
        printf("Please enter H or T for Heads or Tails: ");
        //scanf("%*c");
        scanf("%s", &decider);
        decider = toupper(decider);
        if(decider == 'H'){
            decidernum = 0;
            advance = true;
        }
        else if(decider == 'T'){
            decidernum = 1;
            advance = true;
        }
        else{
            printf("PLEASE ENTER A VALID INPUT OF H/T!\n");
        }
    }while(advance != true);
    
    printf("A coin will now be tossed!\n");
    Sleep(1000);
    system("cls");
    while (count > 0){
    for(int i = 0; i < (sizeof(coinanimation) / sizeof(coinanimation[0])); i++){
        printf("%c", coinanimation[i]);
        Sleep(100);
        system("cls");
    }
    count --;
    }
    srand(time(0));
    int randomcoin = rand() % 2;
    printf("***DRUM ROLL PLEASE***\n");
    Sleep(2000);
    if (randomcoin == 0){
        printf("IT'S HEADS\n");
        Sleep(1000);

    }
    else{
        printf("IT'S TAILS!\n");
        Sleep(1000);
    }
    if(randomcoin == decidernum){
        printf("PLAYER WINS!\n");
        Sleep(2000);
        printf("THAT MEANS YOU GET TO GO FIRST!!!");
        Sleep(2000);
        PLAYER = 'X';
        COMPUTER = 'O';
    }
    else{
        printf("ROTTEN LUCK COMPUTER WINS!");
        Sleep(2000);
        printf("That means you are second :(");
        Sleep(2000);
        COMPUTER = 'X';
        PLAYER = 'O';
        computerStart = true;
    }

    return decider;
}

