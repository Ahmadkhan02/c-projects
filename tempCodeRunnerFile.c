#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char board[10]={0,1,2,3,4,5,6,7,8,9};
void Checkwin();
void MarkBoard();
void DrawBoard();
int input;
int player=1;

int main()
{
  for(int chances=0;chances<18;chances++){
     DrawBoard();
     //Checkwin();
     if (player==1)
     {
     	printf("player 1:");
     	scanf("%d",input);
     	player=player+1;
     }
     else 
     {
        printf("player 2:");
     	scanf("%d",input);