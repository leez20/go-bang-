#include<stdio.h>
#include<stdlib.h>//system clear

//┏ ┓┗ ┛┳ ┻ ╋ ┫┣ ● ○ ▼ △ ▲


#define SIZE 15//board size

 int board[SIZE][SIZE]={0};

struct chess {//chess address
int x;
int y;
};

struct chess bchess[113];//half sife of boar225
struct chess wchess[113];
int bnum=0,wnum=0;


void init_board(void)//initailize the board
{
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
system("clear");
int i=0,j=0;
putchar('\n');
while(i<SIZE)
{
printf("%2d",SIZE-i);
for(j=0;j<SIZE;j++)
	switch(board[i][j])
	{
	case(1): printf("┏" );
	  break;

	case(2): printf("┓");
	  break;
	case(3): printf("┗" );
	  break;
	case(4): printf("┛");
	  break;
	case(5): printf("┣" );
	  break;
	case(6): printf("┫");
	  break;
	case(7): printf("╋");
	  break;
	case(8): printf("┳" );
	  break;
	case(9): printf("┻" );
	  break;
	case(10):printf("●");
	break;
	case(11):printf("▲");
	break;
	case(12):printf("○");
	break;
	case(13):printf("△");
	break;
	default:  break;
	}
i++;
printf("\n");
}
printf("  A B C D E F G H I J K L M N O \n");
}


/*
struct chess {//chess address
int x;
int y;
};

struct chess bchess[113];//half sife of boar225
struct chess wchess[113];
int bnum=0,wnum=0;

*/
struct chess black;

void set_bchess(void){//enter black chess location
int x=0;
int x1=0,y1=0;
char c='A';

printf("\n(Black) Please enter your set \"number,alpha\" : ");
scanf("%d,%c",&x,&c);
if(0<=x && x<SIZE && 'A'<=c && c<='O')
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
	}
//else wrong set
}


struct chess white;

void set_wchess(void){//enter white chess location
int x=0;
int x1=0,y1=0;
char c='A';

printf("\n(White) Please enter your set \"number,alpha\" : ");
scanf("%d,%c",&x,&c);
if(0<=x && x<SIZE && 'A'<=c && c<='O')
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
	}
//  elsewrong set
}








