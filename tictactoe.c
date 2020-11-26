#include <stdio.h>
#include <stdlib.h>

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void Checkwin();
void MarkBoard();
void DrawBoard();
void rep();
void PlayAgain();
int input, chances;
int error = 0;
int player = 1;

int main()
{
    for (chances = 0; chances < 18; chances++) //chances are suposedly infinte
    {
        DrawBoard();
        Checkwin();
        if (chances == 18) //chances are changed by checkwin and hence can be 18 even in this loop
        {
            break;
        }
        if (player == 1) //simple way to change the player as mere integer
        {
            printf("player 1:");
            scanf("%d", &input);
            player = player + 1;
        }
        else if (player == 2)
        {
            printf("player 2:");
            scanf("%d", &input);
            player = player - 1;
        }
        rep(); //checks for repetitive inputs
        MarkBoard();
        if (error = 1) //fixes error for next loop
        {
            error = 0;
        }
    }
    PlayAgain();
    return 0;
}

void DrawBoard()
{
    printf("\nTIC TAC TOE\n");
    printf("player 1 is x   &    player 2 is o \n");
    printf(" %c   %c   %c\n", board[1], board[2], board[3]);
    printf(" %c   %c   %c\n", board[4], board[5], board[6]);
    printf(" %c   %c   %c\n", board[7], board[8], board[9]);
}

void MarkBoard()
{
    if (error == 0)
    {
        if (player == 2) //actually for player 1
        {
            board[input] = 'x';
        }
        else if (player == 1) //actually for player 2
        {
            board[input] = 'o';
        }
        system("cls");
    }
}

void rep()
{
    if (board[input] == 'x' || board[input] == 'o')
    {
        printf("\n galat hai andhe\n");
        error = 1;
    }
    if (error == 1) //if there is a input repetition,the chance has to be given again to the resp player
    {
        if (player == 1)
        {
            player++;
        }
        else if (player == 2)
        {
            player--;
        }
        chances = chances - 1;
    }
}

void Checkwin()
{
    //horizontal
    for (int a = 1; a <= 3; a = a + 1)
    {
        if (board[a] == 'x' && board[a + 1] == 'x' && board[a + 2] == 'x')
        {
            printf("player 1 wins\n");
            chances = 18;
            //exit program
        }
    }
    for (int b = 1; b <= 3; b = b + 1)
    {
        if (board[b] == 'o' && board[b + 1] == 'o' && board[b + 2] == 'o')
        {
            printf("player 2 wins\n");
            chances = 18;
            //exit program
        }
    }
    //vertical
    for (int c = 1; c <= 3; c = c + 1)
    {
        if (board[c] == 'x' && board[c + 3] == 'x' && board[c + 6] == 'x')
        {
            printf("player 1 wins\n");
            chances = 18;
            //exit program
        }
    }
    for (int d = 1; d <= 3; d = d + 1)
    {
        if (board[d] == 'o' && board[d + 3] == 'o' && board[d + 6] == 'o')
        {
            printf("player 2 wins\n");
            chances = 18;

            //exit program
        }
    }
    //diagnol
    if (board[1] == 'x' && board[5] == 'x' && board[9] == 'x')
    {
        printf("player 1 wins\n");
        chances = 18;
        //exit program
    }
    if (board[1] == 'o' && board[5] == 'o' && board[9] == 'o')
    {
        printf("player 2 wins\n");
        chances = 18;
        //exit program
    }
    if (board[7] == 'x' && board[5] == 'x' && board[3] == 'x')
    {
        printf("player 1 wins\n");
        chances = 18;
        //exit program
    }
    if (board[7] == 'o' && board[5] == 'o' && board[3] == 'o')
    {
        printf("player 2 wins\n");
        chances = 18;
        //exit program
    }
}

void PlayAgain()
{
    printf("do you wanna play again?(y/n)\n");
    char game;
    getchar();
    scanf("%c", &game);
    if (game == 'y')
    {
        printf("welcome back\n");
        board[0] = '0';
        board[1] = '1';
        board[2] = '2';
        board[3] = '3';
        board[4] = '4';
        board[5] = '5';
        board[6] = '6';
        board[7] = '7';
        board[8] = '8';
        board[9] = '9';
        chances = 0;
        player = 1;
        error = 0;
        main();
    }
    else if (game == 'n')
    {
        printf("thank you for playing");
    }
}
