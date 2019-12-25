#include"wajud.c"


int Max(int x1,int x2,int x3,int x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}

void wattack(void){
struct chess white,success,full4,half4,full3[6],half3[6],full2[10],half2[10], full1[10],half1;
int ful3=0,ful2=0,ful1=0;//full
int hal3=0,hal2=0;//half

int max=0;

static int A=3;//random function x
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
x2=(x2==14?14:y2+1);
y2=(y2==14?14:y2+1);

if(x1==0)
x2=(x2<3?x2+3:x2);
if(x2==14)
x1=(x1>11?x1-3:x1);
if(y1==0)
y2=(y2<3?y2+3:y2);
if(y2==14)
y1=(y1>11?y1-3:y1);

int value[4]={0};
int i,j;
int blank=0;

for(i=x1;i<=x2;i++)
	for(j=y1;j<=y2;j++)
	{
		A=i*A+j;
		blank=board[j][i];
		if(blank <10)
		{
		white.x=i;
		white.y=j;
		value[0]=waxxjud(white);
		value[1]=wayyjud(white);
		value[2]=wauljud(white);
		value[3]=waurjud(white);
		if(Max(value[0],value[1],value[2],value[3])==9)
			{
			success=white;
			max=9;
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==8 )
			{
			full4=white;
			max=(max>8?max:8);
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==7)
			{
			half4=white;
			max=(max>7?max:7);
			}

		else if(Max(value[0],value[1],value[2],value[3])==6)
			{
			if(ful3<6)
				full3[ful3++]=white;
			else 
				full3[5]=white;
			max=(max>6?max:6);
			}

		else if(Max(value[0],value[1],value[2],value[3])==5)
			{
			if(hal3<6)
				half3[hal3++]=white;
			else
				half3[5]=white;
			max=(max>5?max:5);
			}

		else if(Max(value[0],value[1],value[2],value[3])==4)
			{
			if(ful2<10)
				full2[ful2++]=white;
			else
				full2[9]=white;
			max=(max>4?max:4);
			}

		else if(Max(value[0],value[1],value[2],value[3])==3)
			{
			if(hal2<10)
				half2[hal2++]=white;
			else
				half2[9]=white;
			max=(max>3?max:3);
			}

		else if(Max(value[0],value[1],value[2],value[3])==2)
			{
			if(ful1<10)
				full1[ful1++]=white;
			else
				full1[9]=white;
			max=(max>2?max:2);
			}

		else if(Max(value[0],value[1],value[2],value[3])==1)
			{
			half1=white;
			max=(max>1?max:1);
			}
		}

	}

	switch(max)
	{
	case 9:
		board[success.y][success.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=success;
		break;
	case 8:
		board[full4.y][full4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full4;
		break;
	case 7:
		board[half4.y][half4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half4;
		break;
	case 6:
		A=A%ful3;
		board[full3[A].y][full3[A].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full3[A];
		break;
	case 5:
		A=A%hal3;
		board[half3[A].y][half3[A].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half3[A];
		break;
	case 4:
		A=A%ful2;
		board[full2[A].y][full2[A].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full2[A];
		break;
	case 3:
		A=A%hal2;
		board[half2[A].y][half2[A].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half2[A];
		break;
	case 2:
		A=A%ful1;
		board[full1[A].y][full1[A].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full1[A];
		break;
	case 1:
		board[half1.y][half1.x]=13;
		if(wnum)	
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half1;
		break;
	default :break;
	}
}
