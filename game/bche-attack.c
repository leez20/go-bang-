#include"bche-decide.c"
#include"wche-decide.c"


 int Max(int x1,int x2,int x3,int x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}

static struct chess black,bsuccess,bfull4[10],bhalf4[10],bfull3[10],bhalf3[10],bfull2[10],bhalf2[10], bfull1[10],bhalf1;
static int bful4,bful3,bful2,bful1;//full
static int bhal4,bhal3,bhal2;//half

static struct chess white,wsuccess,wfull4[10],whalf4[10],wfull3[10],whalf3[10],wfull2[10],whalf2[10], wfull1[10],whalf1;
static int wful4, wful3,wful2,wful1;//full
static int whal4,whal3,whal2;//half



static  int binfo(void){
 bful4=0;bhal4=0;bful3=0;bful2=0;bful1=0;bhal3=0;bhal2=0;//initialize


int max=0;
int x1=SIZE-1,y1=SIZE-1;//min rectangle
int x2=0,y2=0;//max rectangle
int k;

for(k=0;k<bnum;k++)
	{
	if(bchess[k].x<x1)
		x1=bchess[k].x;
	if(bchess[k].y<y1)
		y1=bchess[k].y;
	if(bchess[k].x>x2)
		x2=bchess[k].x;
	if(bchess[k].y>y2)
		y2=bchess[k].y;
	}
for(k=0;k<wnum;k++)
	{
	if(wchess[k].x<x1)
		x1=wchess[k].x;
	if(wchess[k].y<y1)
		y1=wchess[k].y;
	if(wchess[k].x>x2)
		x2=wchess[k].x;
	if(wchess[k].y>y2)
		y2=wchess[k].y;
	}

x1=(x1==0?0:x1-1);
y1=(y1==0?0:y1-1);
x2=(x2==14?14:x2+1);
y2=(y2==14?14:y2+1);

if(x1>=x2)
{
x1=0;
x2=SIZE-1;
}
if(y1>=y2)
{
y1=0;
y2=SIZE-1;
}

int value[4]={0};
int i,j;
int blank=0;
int M,m=0;
for(i=x1;i<=x2;i++)
	for(j=y1;j<=y2;j++)
	{
		blank=board[j][i];
		if(blank <10)
		{
		black.x=i;
		black.y=j;
		value[0]=baxxjud(black);
		value[1]=bayyjud(black);
		value[2]=bauljud(black);
		value[3]=baurjud(black);

		switch(Max(value[0],value[1],value[2],value[3]))
		{
		case 9:
			bsuccess=black;
			max=9;
			break;
		break;
		case 8:
			for(M=0;M<4;M++)
				{
					m=0;
				if(value[M]==8)
					m++;
				}
			if(m>1)
				continue;
			else
				{
				if(bful4<10)
					bfull4[bful4++]=black;
				else
					bfull4[9]=black;
				max=(max>8?max:8);
				}
			break;

		case 7:
			if(bhal4<10)
				bhalf4[bhal4++]=black;
			else
				bhalf4[9]=black;
			max=(max>7?max:7);
			break;

		case 6:
			for(M=0;M<4;M++)
				{
					m=0;
				if(value[M]==6)
					m++;
				}
			if(m>1)
				continue;
			else
				{
				if(bful3<10)
					bfull3[bful3++]=black;
				else 
					bfull3[9]=black;
				max=(max>6?max:6);
				}
			break;

		case 5:
			if(bhal3<10)
				bhalf3[bhal3++]=black;
			else
				bhalf3[9]=black;
			max=(max>5?max:5);
			break;

		case 4:
			if(bful2<10)
				bfull2[bful2++]=black;
			else
				bfull2[9]=black;
			max=(max>4?max:4);
			break;

		case 3:
			if(bhal2<10)
				bhalf2[bhal2++]=black;
			else
				bhalf2[9]=black;
			max=(max>3?max:3);
			break;

		case 2:
			if(bful1<10)
				bfull1[bful1++]=black;
			else
				bfull1[9]=black;
			max=(max>2?max:2);
			break;

		case 1:
			bhalf1=black;
			max=(max>1?max:1);
			break;
		case 0: max=0;
			break;
		default :break;
		}
		}
	}
return max;
}


static  int winfo(void){
 wful4=0;whal4=0;wful3=0;wful2=0;wful1=0; whal3=0;whal2=0;//initialize

int max=0;
int x1=SIZE-1,y1=SIZE-1;//min rectangle
int x2=0,y2=0;//max rectangle
int k;

for(k=0;k<bnum;k++)
	{
	if(bchess[k].x<x1)
		x1=bchess[k].x;
	if(bchess[k].y<y1)
		y1=bchess[k].y;
	if(bchess[k].x>x2)
		x2=bchess[k].x;
	if(bchess[k].y>y2)
		y2=bchess[k].y;
	}
for(k=0;k<wnum;k++)
	{
	if(wchess[k].x<x1)
		x1=wchess[k].x;
	if(wchess[k].y<y1)
		y1=wchess[k].y;
	if(wchess[k].x>x2)
		x2=wchess[k].x;
	if(wchess[k].y>y2)
		y2=wchess[k].y;
	}

x1=(x1==0?0:x1-1);
y1=(y1==0?0:y1-1);
x2=(x2==14?14:x2+1);
y2=(y2==14?14:y2+1);

int value[4]={0};
int i,j;
int blank=0;

for(i=x1;i<=x2;i++)
	for(j=y1;j<=y2;j++)
	{
		blank=board[j][i];
		if(blank <10)
		{
		white.x=i;
		white.y=j;
		value[0]=waxxjud(white);
		value[1]=wayyjud(white);
		value[2]=wauljud(white);
		value[3]=waurjud(white);
switch(Max(value[0],value[1],value[2],value[3]))
			{

		case 9:
			wsuccess=white;
			max=9;
			break;
			
		case 8:
			if(wful4<10)
				wfull4[wful4++]=white;
			else
				wfull4[9]=white;	
			max=(max>8?max:8);
			break;

		case 7:
			if(whal4<10)
				whalf4[whal4++]=white;
			else
				whalf4[9]=white;
			max=(max>7?max:7);
			break;

		case  6:
			if(wful3<10)
				wfull3[wful3++]=white;
			else 
				wfull3[9]=white;
			max=(max>6?max:6);
			break;

		case 5:
			if(whal3<10)
				whalf3[whal3++]=white;
			else
				whalf3[9]=white;
			max=(max>5?max:5);
			break;

		case 4:
			if(wful2<10)
				wfull2[wful2++]=white;
			else
				wfull2[9]=white;
			max=(max>4?max:4);
			break;

		case 3:
			if(whal2<10)
				whalf2[whal2++]=white;
			else
				whalf2[9]=white;
			max=(max>3?max:3);
			break;

		case 2:
			if(wful1<10)
				wfull1[wful1++]=white;
			else
				wfull1[9]=white;
			max=(max>2?max:2);
			break;

		case 1:
			whalf1=white;
			max=(max>1?max:1);
			break;
			}
		}
	}
return max;
}


void battack(void){
int max1=0,max2=0;
max1=binfo();
max2=winfo();
int i,j;
int signal=0;
int random=rand();// get random integer
if(max1>=max2)
{
	switch(max1)
	{
	case 9:
		board[bsuccess.y][bsuccess.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bsuccess;
		break;
	case 8:
		switch (max2)
		{
			case 8:
				for(i=0;i<bful4;i++)
					for(j=0;j<wful4;j++)
					if(bfull4[i].x==wfull4[j].x && bfull4[i].y==wfull4[j].y)
						{
						signal=1;
						random=i;
						break;
						}
				if(signal!=1)
				  random=random%bful4;
			break;
			default:random=random%bful4;
			break;
		}		
		board[bfull4[random].y][bfull4[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull4[random];
		break;
	case 7:
		random=random%bhal4;
		board[bhalf4[random].y][bhalf4[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf4[random];
		break;
	case 6:
		random=random%bful3;
		board[bfull3[random].y][bfull3[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull3[random];
		break;
	case 5:
		random=random%bhal3;
		board[bhalf3[random].y][bhalf3[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf3[random];
		break;
	case 4:
		random=random%bful2;
		board[bfull2[random].y][bfull2[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull2[random];
		break;
	case 3:
		random=random%bhal2;
		board[bhalf2[random].y][bhalf2[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf2[random];
		break;
	case 2:
		random=random%bful1;
		board[bfull1[random].y][bfull1[random].x]=11;
		if(bnum)
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull1[random];
		break;
	case 1:
		board[bhalf1.y][bhalf1.x]=11;
		if(bnum)	
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf1;
		break;
	default :break;
	}
}
else
switch(max2)
	{
	case 9:
		board[wsuccess.y][wsuccess.x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=wsuccess;
		break;
	case 8:
		random=random%wful4;
		board[wfull4[random].y][wfull4[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=wfull4[random];
		break;
	case 7:
		random=random%whal4;
		board[whalf4[random].y][whalf4[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=whalf4[random];
		break;
	case 6:
		random=random%wful3;
		board[wfull3[random].y][wfull3[random].x]=11;
		board[bchess[bnum-1].y][bchess[wnum-1].x]=10;
		bchess[bnum++]=wfull3[random];
		break;
	case 5:
		random=random%whal3;
		board[whalf3[random].y][whalf3[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=whalf3[random];
		break;
	case 4:
		random=random%wful2;
		board[wfull2[random].y][wfull2[random].x]=11;
		if(bnum)
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=wfull2[random];
		break;
	case 3:
		random=random%whal2;
		board[whalf2[random].y][whalf2[random].x]=11;
		if(bnum)
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=whalf2[random];
		break;
	case 2:
		random=random%wful1;
		board[wfull1[random].y][wfull1[random].x]=11;
		if(bnum)
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=wfull1[random];
		break;
	case 1:
		board[whalf1.y][whalf1.x]=11;
		if(bnum)	
			board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=whalf1;
		break;
	default :break;
	}
}
