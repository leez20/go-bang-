#include"bche-decide.c"
#include"wche-decide.c"


int Max(int x1,int x2,int x3,int x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}

struct chess black,bsuccess,bfull4,bhalf4,bfull3[6],bhalf3[6],bfull2[10],bhalf2[10], bfull1[10],bhalf1;
int bful3,bful2,bful1;//full
int bhal3,bhal2;//half

struct chess white,wsuccess,wfull4,whalf4,wfull3[6],whalf3[6],wfull2[10],whalf2[10], wfull1[10],whalf1;
int wful3,wful2,wful1;//full
int whal3,whal2;//half



int binfo(void){
 bful3=0,bful2=0,bful1=0,bhal3=0,bhal2=0;//initialize


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
		if(Max(value[0],value[1],value[2],value[3])==9)
			{
			bsuccess=black;
			max=9;
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==8 )
			{
			bfull4=black;
			max=(max>8?max:8);
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==7)
			{
			bhalf4=black;
			max=(max>7?max:7);
			}

		else if(Max(value[0],value[1],value[2],value[3])==6)
			{
			if(bful3<6)
				bfull3[bful3++]=black;
			else 
				bfull3[5]=black;
			max=(max>6?max:6);
			}

		else if(Max(value[0],value[1],value[2],value[3])==5)
			{
			if(bhal3<6)
				bhalf3[bhal3++]=black;
			else
				bhalf3[5]=black;
			max=(max>5?max:5);
			}

		else if(Max(value[0],value[1],value[2],value[3])==4)
			{
			if(bful2<10)
				bfull2[bful2++]=black;
			else
				bfull2[9]=black;
			max=(max>4?max:4);
			}

		else if(Max(value[0],value[1],value[2],value[3])==3)
			{
			if(bhal2<10)
				bhalf2[bhal2++]=black;
			else
				bhalf2[9]=black;
			max=(max>3?max:3);
			}

		else if(Max(value[0],value[1],value[2],value[3])==2)
			{
			if(bful1<10)
				bfull1[bful1++]=black;
			else
				bfull1[9]=black;
			max=(max>2?max:2);
			}

		else if(Max(value[0],value[1],value[2],value[3])==1)
			{
			bhalf1=black;
			max=(max>1?max:1);
			}
		else max=0;
		}

	}
return max;
}


int winfo(void){
 wful3=0,wful2=0,wful1=0; whal3=0,whal2=0;//initialize

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
			wsuccess=white;
			max=9;
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==8 )
			{
			wfull4=white;
			max=(max>8?max:8);
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==7)
			{
			whalf4=white;
			max=(max>7?max:7);
			}

		else if(Max(value[0],value[1],value[2],value[3])==6)
			{
			if(wful3<6)
				wfull3[wful3++]=white;
			else 
				wfull3[5]=white;
			max=(max>6?max:6);
			}

		else if(Max(value[0],value[1],value[2],value[3])==5)
			{
			if(whal3<6)
				whalf3[whal3++]=white;
			else
				whalf3[5]=white;
			max=(max>5?max:5);
			}

		else if(Max(value[0],value[1],value[2],value[3])==4)
			{
			if(wful2<10)
				wfull2[wful2++]=white;
			else
				wfull2[9]=white;
			max=(max>4?max:4);
			}

		else if(Max(value[0],value[1],value[2],value[3])==3)
			{
			if(whal2<10)
				whalf2[whal2++]=white;
			else
				whalf2[9]=white;
			max=(max>3?max:3);
			}

		else if(Max(value[0],value[1],value[2],value[3])==2)
			{
			if(wful1<10)
				wfull1[wful1++]=white;
			else
				wfull1[9]=white;
			max=(max>2?max:2);
			}

		else if(Max(value[0],value[1],value[2],value[3])==1)
			{
			whalf1=white;
			max=(max>1?max:1);
			}
		}

	}
return max;
}


void wattack(void){
int max1,max2;
max1=binfo();
max2=winfo();
int random=rand()%11;// get random integer
if(max2>=max1)
	switch(max2)
	{
	case 9:
		board[wsuccess.y][wsuccess.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wsuccess;
		break;
	case 8:
		board[wfull4.y][wfull4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wfull4;
		break;
	case 7:
		board[whalf4.y][whalf4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=whalf4;
		break;
	case 6:
		random=random%wful3;
		board[wfull3[random].y][wfull3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wfull3[random];
		break;
	case 5:
		random=random%whal3;
		board[whalf3[random].y][whalf3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;;
		wchess[wnum++]=whalf3[random];
		break;
	case 4:
		random=random%wful2;
		board[wfull2[random].y][wfull2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wfull2[random];
		break;
	case 3:
		random=random%whal2;
		board[whalf2[random].y][whalf2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=whalf2[random];
		break;
	case 2:
		random=random%wful1;
		board[wfull1[random].y][wfull1[random].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wfull1[random];
		break;
	case 1:
		board[whalf1.y][whalf1.x]=13;
		if(wnum)	
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=whalf1;
		break;
	default :break;
	}

else
	switch(max1)
	{
	case 9:
		board[bsuccess.y][bsuccess.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bsuccess;
		break;
	case 8:
		board[bfull4.y][bfull4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bfull4;
		break;
	case 7:
		board[bhalf4.y][bhalf4.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bhalf4;
		break;
	case 6:
		random=random%bful3;
		board[bfull3[random].y][bfull3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bfull3[random];
		break;
	case 5:
		random=random%bhal3;
		board[bhalf3[random].y][bhalf3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bhalf3[random];
		break;
	case 4:
		random=random%bful2;
		board[bfull2[random].y][bfull2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bfull2[random];
		break;
	case 3:
		random=random%bhal2;
		board[bhalf2[random].y][bhalf2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bhalf2[random];
		break;
	case 2:
		random=random%bful1;
		board[bfull1[random].y][bfull1[random].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bfull1[random];
		break;
	case 1:
		board[bhalf1.y][bhalf1.x]=13;
		if(wnum)	
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=bhalf1;
		break;
	default :break;
	}

}




/*	switch(max)
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
		random=random%ful3;
		board[full3[random].y][full3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full3[random];
		break;
	case 5:
		random=random%hal3;
		board[half3[random].y][half3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half3[random];
		break;
	case 4:
		random=random%ful2;
		board[full2[random].y][full2[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full2[random];
		break;
	case 3:
		random=random%hal2;
		board[half2[random].y][half2[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=half2[random];
		break;
	case 2:
		random=random%ful1;
		board[full1[random].y][full1[random].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=full1[random];
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
*/
