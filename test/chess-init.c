#include "head.h"
#include <stdio.h>



void init_board(void)//initailize the board
{
bnum=0;
wnum=0;
board[0][0]=1;//┏ 
board[0][SIZE-1]=2;//┓

board[SIZE-1][0]=3;//┗ 
board[SIZE-1][SIZE-1]=4;//┛

int i=1,j=0;
while(i<SIZE-1)
	{
	for(j=0;j<SIZE;j++)
	{
	if(j==0)
		board[i][j]=5;//┣ 
	else if(j==SIZE-1)
		board[i][j]=6;//┫
	else
		board[i][j]=7;//╋ 
	}
	i++;
	}
for(j=1;j<SIZE-1;j++)
	{
	board[0][j]=8;//┳ 
	board[SIZE-1][j]=9;//┻
	}
}


void display_board(void)
{
int i=0,j=0;
putchar('\n');
while(i<SIZE)
{
printf("%2d",SIZE-i);
for(j=0;j<SIZE;j++)
	switch(board[i][j])
	{
	case 1: printf("┏" );
	  break;

	case 2: printf("┓");
	  break;
	case 3: printf("┗" );
	  break;
	case 4: printf("┛");
	  break;
	case 5: printf("┣" );
	  break;
	case 6: printf("┫");
	  break;
	case 7: printf("╋");
	  break;
	case 8: printf("┳" );
	  break;
	case 9: printf("┻" );
	  break;
	case 10:printf("●");
	break;
	case 11:printf("▲");
	break;
	case 12:printf("○");
	break;
	case 13:printf("△");
	break;
	default:  break;
	}
i++;
printf("\n");
}
printf("  A B C D E F G H I J K L M N O \n");
}

struct chess black;

int set_bchess(char s[]){//enter black chess location
int x=0;
int x1=0,y1=0;
char c='A';
char X;//diminish '\n'
int valid=1;
while(valid==1)
{
printf("\n%s, please enter your set \"alpha number(example: H 8)\" : ",s);
scanf("%c %d",&c,&x);
X=getchar();//diminish '\n'
if(0<=x && x<=SIZE && 'A'<=c && c<='O')
	{
	black.x=c-'A';
	black.y=SIZE-x;
	if(bnum>0)
		{
	x1=bchess[bnum-1].x;
	y1=bchess[bnum-1].y;
	board[y1][x1]=10;		
		}
	x1=black.x;
	y1=black.y;
	board[y1][x1]=11;
	bchess[bnum].x=x1;
	bchess[bnum].y=y1;
	bnum++;
	valid=1;
	return 1;
	}

else
	{
	printf("\n Invalid input. Input 1 to try again or input any other number to quit:");
	scanf("%d",&valid);
	X=getchar();//diminish '\n'
	}
}
if(valid!=1)
return 0;
}

struct chess white;

int set_wchess(char s[]){//enter white chess location
int x=0;
int x1=0,y1=0;
char c='A';
int valid=1;
char X;//diminish '\n'

while(valid==1)
{
printf("\n%s, please enter your set \"alpha number(example: H 8)\" : ",s);
scanf("%c %d",&c,&x);
X=getchar();//diminish '\n'
if(0<=x && x<=SIZE && 'A'<=c && c<='O')
	{
	white.x=c-'A';
	white.y=SIZE-x;
	if(wnum>0)
		{
	x1=wchess[wnum-1].x;
	y1=wchess[wnum-1].y;
	board[y1][x1]=12;
		}
	x1=white.x;
	y1=white.y;
	board[y1][x1]=13;
	wchess[wnum].x=x1;
	wchess[wnum].y=y1;
	wnum++;
	valid=0;
	return 1;
	}

else
	{
	printf("\n Invalid input. Input 1 to try again or input any other number to quit:");
	scanf("%d",&valid);
	X=getchar();//diminish '\n'
	}
}
if(valid!=1)
return 0;
}


int Max(int x1,int x2,int x3,int x4)//return max(x1,x2,x3,x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}





