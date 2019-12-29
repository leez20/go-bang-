#include <stdio.h>
#include <stdlib.h>//random func
#include <time.h>//random func
#include "chess-init.h"//initailize gobang board
#include "chess-info.h"//enumeration tab
#include "chess-judge.h"//return line two side info
#include "chess-decide.h"//decide which chess pattern the location belong to
#include "chess-attack.h"//chess attack func battack,wattack

/* in init.c:
1.func init_board,display_board, set_bchess, set_wchess,Max;
2.array board[SIZE][SIZE]; 
3.struct chess{
	int x;
	int y} bchess[115] wchess[115];
4.int bnum wnum
*/


int bjudge(struct chess black);//judge wether black chess win or lose(forbid)
int wjudge(struct chess white);//judge wether white chess win or not


int main()
{
srand(time(NULL));//random function x, to use rand() in func b/wattack
int bwin=0,wwin=0,side=-1,pattern=-1;
int i=0;
int bvalid=0,wvalid=0;
char X;//diminish '\n'
char A[20]="\0";//A name
char B[20]="\0";//B name


	init_board();//initailize gobgang board
	display_board();
printf("\n------------------------------------------------------------------\nWelcome to play gobang game! Which pattern do you want to choose?\n\n");
while(pattern!=0 && pattern!=1 && pattern!=2)
	{
	printf("\n----------------------------------------\n0.Give up playing!\n1.Play with friends\n2.Play with computer\n----------------------------------------\n");
	scanf("%d",&pattern);
	X=getchar();//diminish '\n'
if(pattern!=0 && pattern!=1 && pattern!=2)
	 printf("\nInput wrong number,try again or enter 0 to quit game!\n") ;
	}

if(pattern==1)
{
int j;char c;
printf("\n----------------------------------------\nPlease enter your name:");
for (j=0;j<20 && (c=getchar())!='\n';j++)
	A[j]=c;
printf("\n----------------------------------------\nPlease enter your friend's name:");
for (j=0;j<20 && (c=getchar())!='\n';j++)
	B[j]=c;

printf("\n\n\n----------------------------------------\nWhich side does %s want to choose?\n\n",A);
	while(side!=0 && side!=1 &&side!=2)
		{
		printf("\n----------------------------------------\n0.Give up playing\n1.Black chess(White chess for %s)\n2.White chess(Black chess for %s)\n----------------------------------------\n",B,B);
		scanf("%d",&side);
		X=getchar();//diminish '\n'
	if(side!=0 && side!=1 &&side!=2)
		 printf("\nInput wrong number,try again or enter 0 to quit game!\n") ;
		}
	if(side==1)
	{

		for(i=0;i<SIZE*SIZE+1;i++)
		{
		bvalid=0;
		wvalid=0;
		if(wnum>0)
			wwin=wjudge(wchess[wnum-1]);

		 if(wwin==1)
			{
			printf("\n----------------------------------------\n%s set chess at: %c%d. %s win the game!\n----------------------------------------\n\n",B,wchess[wnum-1].x+'A',SIZE-wchess[wnum-1].y,B);
			break;
			}
	if(wnum>0)
		printf("\n----------------------------------------\n%s set chess at: %c%d.\n----------------------------------------\n\n",B,wchess[wnum-1].x+'A',SIZE-wchess[wnum-1].y);
		bvalid=set_bchess(A);
		if(bvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",A);		
		break;
		}
	if(bnum>0)
			bwin=bjudge(bchess[bnum-1]);
		if(bwin==1)
			{
			printf("\n----------------------------------------\n%s set chess at: %c%d. %s win the game!\n----------------------------------------\n\n",A,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y,B);
			break;
			}

		else if(bwin==-1)
			{
			printf("\n----------------------------------------\n%s set chess at forbidden location: %c%d. %s win the game!\n----------------------------------------\n\n",B,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y,A);
			break;
			}

	if(bnum>0)
		printf("\n----------------------------------------\n%s set chess at: %c%d.\n----------------------------------------\n\n",A,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
		wvalid=set_wchess(B);
		if(wvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",B);		
		break;
		}
		}

	}

	else if(side==2)
	{
	for(i=0;i<SIZE*SIZE+1;i++)
		{
		bvalid=0;
		wvalid=0;
		if(wnum>0)
			wwin=wjudge(wchess[wnum-1]);
		if(wwin==1)
			{
			printf("\n----------------------------------------\n%s set chess at: %c%d. %s win the game!\n----------------------------------------\n\n",A,wchess[bnum-1].x+'A',SIZE-wchess[bnum-1].y,A);
			break;
			}
	if(wnum>0)
		printf("\n----------------------------------------\n%s set chess at: %c%d.\n----------------------------------------\n",A,wchess[wnum-1].x+'A',SIZE-wchess[wnum-1].y);
		bvalid=set_bchess(B);
		if(bvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",B);		
		break;
		}
	if(bnum>0)		
		bwin=bjudge(bchess[bnum-1]);
		if(bwin==1)
			{
			printf("\n----------------------------------------\n%s set chess at: %c%d. %s win the game!\n----------------------------------------\n\n",B,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y,B);
			break;
			}

		else if(bwin==-1)
			{
			printf("\n----------------------------------------\n%s set chess at forbidden location: %c%d. %s win the game!\n----------------------------------------\n\n",B,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y,A);
			break;
			}	
	
	if(bnum>0)
		printf("\n----------------------------------------\n%s set chess at: %c%d.\n----------------------------------------\n\n",B,bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
		wvalid=set_wchess(A);
		if(wvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",A);		
		break;
		}
		}

	}


}

else if(pattern==2)
{
int j;char c;
printf("\n----------------------------------------\nPlease enter your name:");
for (j=0;j<20 && (c=getchar())!='\n';j++)
	A[j]=c;
	printf("\n----------------------------------------\n%s,Which side do you want to choose?\n",A);
	while(side!=0 && side!=1 &&side!=2)
		{
		printf("\n-----------------------------------------\n0.Give up playing\n1.White chess(Black chess for computer)\n2.Black chess(White chess for computer)\n-----------------------------------------\n");
		scanf("%d",&side);
		X=getchar();//diminish '\n'
	if(side!=0 && side!=1 &&side!=2)
		 printf("Input wrong number,try again or enter 0 to quit game!\n") ;
		}

	if(side==1)
	{
		board[7][7]=11;
		bnum=0;
		bchess[bnum].x=7;
		bchess[bnum++].y=7;
		display_board();

		for(i=1;i<SIZE*SIZE+1;i++)
		{
		wvalid=0;
			bwin=bjudge(bchess[bnum-1]);
		if(wnum>0)
			wwin=wjudge(wchess[wnum-1]);

		if(bwin==1)
			{
			printf("\n----------------------------------------\nBlack-chess side set chess at: %c%d. Black-chess side win the game!\n----------------------------------------\n\n",bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
			break;
			}

		else if(bwin==-1)
			{
			printf("\n----------------------------------------\nBlack-chess side set chess at forbidden location: %c%d. White-chess side win the game!\n----------------------------------------\n\n",bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
			break;
			}
		else if(wwin==1)
			{
			printf("\n----------------------------------------\nWhite-chess side set chess at: %c%d. White-chess side win the game!\n----------------------------------------\n\n",wchess[wnum-1].x+'A',SIZE-wchess[wnum-1].y);
			break;
			}
		printf("\n----------------------------------------\nBlack-chess side set chess at: %c%d.\n----------------------------------------\n",bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
		wvalid=set_wchess(A);
		if(wvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",A);		
		break;
		}
		battack();
		display_board();
		}

	}

	else if(side==2)
	{
	for(i=0;i<SIZE*SIZE+1;i++)
		{
		bvalid=0;
		if(bnum>0)		
			bwin=bjudge(bchess[bnum-1]);
		if(wnum>0)
			wwin=wjudge(wchess[wnum-1]);

		if(bwin==1)
			{
			printf("\n----------------------------------------\nBlack-chess side set chess at: %c%d. Black-chess side win the game!\n----------------------------------------\n\n",bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
			break;
			}

		else if(bwin==-1)
			{
			printf("\n----------------------------------------\nBlack-chess side set chess at forbidden location: %c%d. White-chess side win the game!\n----------------------------------------\n\n",bchess[bnum-1].x+'A',SIZE-bchess[bnum-1].y);
			break;
			}
		else if(wwin==1)
			{
			printf("\n----------------------------------------\nWhite-chess side set chess at: %c%d. White-chess side win the game!\n----------------------------------------\n\n",wchess[bnum-1].x+'A',SIZE-wchess[bnum-1].y);
			break;
			}
		if(wnum>0)
			printf("\n----------------------------------------\nWhite-chess side set chess at: %c%d.\n----------------------------------------\n",wchess[wnum-1].x+'A',SIZE-wchess[wnum-1].y);
		bvalid=set_bchess(A);
		if(bvalid)
		display_board();
	else 
		{
		printf("\n%s give up the game!\n",A);		
		break;
		}
		wattack();
		display_board();
		}

	}
}
if (i==SIZE*SIZE+1)
	printf("\nNo one win,no one lose!\n\n");

printf("Enter 0 to quit game!");
scanf("%d",&i); 
return 0;	
}



int bjudge(struct chess black)
{
int x1,x2, X;
int value[4]={0};
int M,m=0;
		value[0]=baxxjud(black);
		value[1]=bayyjud(black);
		value[2]=bauljud(black);
		value[3]=baurjud(black);

		switch(Max(value[0],value[1],value[2],value[3]))
			{
			case 9:
				x1=bajudxx1(black);
				x2=bajudxx2(black);
				X=bajud(x1,x2);
				if(X==0)
					return -1;
				x1=bajudyy1(black);
				x2=bajudyy2(black);
				X=bajud(x1,x2);
				if(X==0)
					return -1;
				x1=bajudul1(black);
				x2=bajudul2(black);
				X=bajud(x1,x2);
				if(X==0)
					return -1;
				x1=bajudur1(black);
				x2=bajudur2(black);
				X=bajud(x1,x2);
				if(X==0)
					return -1;
				return 1;//long
			case 8:
			
				for(M=0;M<4;M++)
					{
						m=0;
					if(value[M]==8 ||value[M]==6)
						m++;
					}
				if(m>1)
					return -1;
				else
					return 1;

			case 6:
				for(M=0;M<4;M++)
					{
						m=0;
					if(value[M]==6)
						m++;
					}
				if(m>1)
					return -1;
				else
					return 0;
			default: return 0;
			}
}

int wjudge(struct chess white)
{
int x1,x2, X;
int value[4]={0};
int M,m=0;
		value[0]=waxxjud(white);
		value[1]=wayyjud(white);
		value[2]=wauljud(white);
		value[3]=waurjud(white);

		switch(Max(value[0],value[1],value[2],value[3]))
			{
			case 9:case 8:
					return 1;
			
			case 6:
				for(M=0;M<4;M++)
					{
						m=0;
					if(value[M]==6)
						m++;
					}
				if(m>1)
					return 1;
			default: return 0;
			}
}

