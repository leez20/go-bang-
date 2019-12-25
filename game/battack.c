#include"bajud.c"
/*
#include "init"
struct chess{
	int x;
	int y;
	};
*/

int Max(int x1,int x2,int x3,int x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}

void battack(void){
struct chess black,success,full4,half4,full3,half3,full2,half2, full1,half1;


int max=0;


int value[4]={0};
int i,j,x;
int blank=0;
for(x=0;x<225;x++)
{
j=x/(SIZE);
i=x%SIZE;
blank=board[j][i];
	if(blank <10)
	{
	black.x=i;
	black.y=j;
	value[0]=baxxjud(black);
	value[1]=bayyjud(black);
	value[2]=bauljud(black);
	value[3]=baurjud(black);
	if(Max(value[0],value[1],value[2],value[3])==9)
		{
		success=black;
		max=9;
		}

	else if(Max(value[0],value[1],value[2],value[3])==8)
		{
		full4=black;
		max=(max>8?max:8);
		}

	else if(Max(value[0],value[1],value[2],value[3])==7)
		{
		half4=black;
		max=(max>7?max:7);
		}

	else if(Max(value[0],value[1],value[2],value[3])==6)
		{
		full3=black;
		max=(max>6?max:6);
		}

	else if(Max(value[0],value[1],value[2],value[3])==5)
		{
		half3=black;
		max=(max>5?max:5);
		}

	else if(Max(value[0],value[1],value[2],value[3])==4)
		{
		full2=black;
		max=(max>4?max:4);
		}

	else if(Max(value[0],value[1],value[2],value[3])==3)
		{
		half2=black;
		max=(max>3?max:3);
		}

	else if(Max(value[0],value[1],value[2],value[3])==2)
		{
		full1=black;
		max=(max>2?max:2);
		}

	else if(Max(value[0],value[1],value[2],value[3])==1)
		{
		half1=black;
		max=(max>1?max:1);
		}
	}

}

	switch(max)
	{
	case 9:
		board[success.y][success.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=success;
		break;
	case 8:
		board[full4.y][full4.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=full4;
		break;
	case 7:
		board[half4.y][half4.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=half4;
		break;
	case 6:
		board[full3.y][full3.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=full3;
		break;
	case 5:
		board[half3.y][half3.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=half3;
		break;
	case 4:
		board[full2.y][full2.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=full2;
		break;
	case 3:
		board[half2.y][half2.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=half2;
		break;
	case 2:
		board[full1.y][full1.x]=11;
		if(bnum)
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=full1;
		break;
	case 1:
		board[half1.y][half1.x]=11;
		if(bnum)	
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=half1;
		break;
	default :break;
	}
}
