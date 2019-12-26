#include"bche-decide.c"
#include"wche-decide.c"


 int Max(int x1,int x2,int x3,int x4)
{
int y1,y2;
y1= (x1>x2?x1:x2);
y2= (x3>x4?x3:x4);
return y1>y2?y1:y2;
}

struct chess black,bsuccess,bfull4[10],bhalf4[10],bfull3[10],bhalf3[10],bfull2[10],bhalf2[10], bfull1[10],bhalf1;
 int bful4,bful3,bful2,bful1;//full
 int bhal4,bhal3,bhal2;//half

 struct chess white,wsuccess,wfull4[10],whalf4[10],wfull3[10],whalf3[10],wfull2[10],whalf2[10], wfull1[10],whalf1;
 int wful4,wful3,wful2,wful1;//full
 int whal4,whal3,whal2;//half



 int binfo(void){
 bful4=0,bhal4=0,bful3=0,bful2=0,bful1=0,bhal3=0,bhal2=0;//initialize


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
			int k,m=1;
			for(k=0;k<4;k++)
				if(value[k]==8)
					m++;
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
			}

		else if(Max(value[0],value[1],value[2],value[3])==7)
			{
			if(bhal4<10)
				bhalf4[bhal4++]=black;
			else
				bhalf4[9]=black;
			max=(max>7?max:7);
			}

		else if(Max(value[0],value[1],value[2],value[3])==6)
			{
			int k,m=1;
			for(k=0;k<4;k++)
				if(value[k]==6)
					m++;
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
			}

		else if(Max(value[0],value[1],value[2],value[3])==5)
			{
			if(bhal3<10)
				bhalf3[bhal3++]=black;
			else
				bhalf3[9]=black;
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
			if(wful4<10)
				wfull4[wful4++]=white;
			else
				wfull4[9]=white;	
			max=(max>8?max:8);
			break;
			}

		else if(Max(value[0],value[1],value[2],value[3])==7)
			{
			if(whal4<10)
				whalf4[whal4++]=white;
			else
				whalf4[9]=white;
			max=(max>7?max:7);
			}

		else if(Max(value[0],value[1],value[2],value[3])==6)
			{
			if(wful3<10)
				wfull3[wful3++]=white;
			else 
				wfull3[9]=white;
			max=(max>6?max:6);
			}

		else if(Max(value[0],value[1],value[2],value[3])==5)
			{
			if(whal3<10)
				whalf3[whal3++]=white;
			else
				whalf3[9]=white;
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


void battack(void){
int random=rand()%11;// get random integer
int max1,max2;
max1=binfo();
max2=winfo();
int i,j;
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
			if(bfull4[i].x==wfull4[j].x &&bfull4[i].y==wfull4[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful4;
	break;
	case 7:
		for(i=0;i<bful4;i++)
			for(j=0;j<whal4;j++)
			if(bfull4[i].x==whalf4[j].x &&bfull4[i].y==whalf4[j].y )
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful4;
	break;
	case 6:
		for(i=0;i<bful4;i++)
			for(j=0;j<wful3;j++)
			if(bfull4[1].x==wfull3[j].x &&bfull4[1].y==wfull3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful4;
	break;
	case 5:
		for(i=0;i<bful4;i++)
			for(j=0;j<whal3;j++)
			if(bfull4[i].x==whalf3[j].x &&bfull4[i].y==whalf3[j].y )
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful4;
	break;
	case 4:
		for(i=0;i<bful4;i++)
			for(j=0;j<wful2;j++)
			if(bfull4[i].x==wfull2[j].x &&bfull4[i].y==wfull2[j].y )
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful4;
	break;
	case 3:
		for(i=0;i<bful4;i++)
			for(j=0;j<whal2;j++)
			if(bfull4[i].x==whalf2[j].x &&bfull4[i].y==whalf2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
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
	switch (max2)
	{
	case 7:
		for(i=0;i<bhal4;i++)
			for(j=0;j<whal4;j++)
			if(bhalf4[i].x==whalf4[j].x && bhalf4[i].y==whalf4[j].y )
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal4;
	break;
	case 6:
		for(i=0;i<bhal4;i++)
			for(j=0;j<wful3;j++)
			if(bhalf4[i].x==wfull3[j].x && bhalf4[i].y==wfull3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal4;
	break;
	case 5:
		for(i=0;i<bhal4;i++)
			for(j=0;j<whal3;j++)
			if(bhalf4[i].x==whalf3[j].x && bhalf4[i].y==whalf3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal4;
	break;
	case 4:
		for(i=0;i<bhal4;i++)
			for(j=0;j<wful2;j++)
			if(bhalf4[i].x==wfull2[j].x && bhalf4[i].y==wfull2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal4;
	break;
	case 3:
		for(i=0;i<bhal4;i++)
			for(j=0;j<whal2;j++)
			if(bhalf4[i].x==whalf2[j].x && bhalf4[i].y==whalf2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal4;
	break;
	default:random=random%bhal4;
	break;
	}
		board[bhalf4[random].y][bhalf4[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf4[random];
		break;
	case 6:
	switch (max2)
	{
	case 6:
		for(i=0;i<bful3;i++)
			for(j=0;j<wful3;j++)
			if(bfull3[i].x==wfull3[j].x && bfull3[i].y==wfull3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful3;
	break;
	case 5:
		for(i=0;i<bful3;i++)
			for(j=0;j<whal3;j++)
			if(bfull3[i].x==whalf3[j].x && bfull3[i].y==whalf3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful3;
	break;
	case 4:
		for(i=0;i<bful3;i++)
			for(j=0;j<wful2;j++)
			if(bfull3[i].y==wfull2[j].y && bfull3[i].x==wfull2[j].x)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful3;
	break;
	case 3:
		for(i=0;i<bful3;i++)
			for(j=0;j<whal2;j++)
			if(bfull3[i].x==whalf2[j].x && bfull3[i].y==whalf2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful3;
	break;
	default:random=random%bful3;
	break;
	}		

		board[bfull3[random].y][bfull3[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull3[random];
		break;
	case 5:
	switch (max2)
	{
	case 5:
		for(i=0;i<bhal3;i++)
			for(j=0;j<whal3;j++)
			if(bhalf3[i].x==whalf3[j].x && bhalf3[i].y==whalf3[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal3;
	break;
	case 4:
		for(i=0;i<bhal3;i++)
			for(j=0;j<wful2;j++)
			if(bhalf3[i].x==wfull2[j].x && bhalf3[i].y==wfull2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal3;
	break;
	case 3:
		for(i=0;i<bhal3;i++)
			for(j=0;j<whal2;j++)
			if(bhalf3[i].x==whalf2[j].x && bhalf3[i].y==whalf2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal3;
	break;
	default:random=random%bhal3;
	break;
	}
		board[bhalf3[random].y][bhalf3[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bhalf3[random];
		break;
	case 4:
	switch (max2)
	{
	case 4:
		for(i=0;i<bful2;i++)
			for(j=0;j<wful2;j++)
			if(bfull2[i].x==wfull2[j].x && bfull2[i].y==wfull2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful2;
	break;
	case 3:
		for(i=0;i<bful2;i++)
			for(j=0;j<whal2;j++)
			if(bfull2[i].x==whalf2[j].x && bfull2[i].y==whalf2[j].y)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bful2;
	break;
	default:random=random%bful2;
	break;
	}		
		board[bfull2[random].y][bfull2[random].x]=11;
		board[bchess[bnum-1].y][bchess[bnum-1].x]=10;
		bchess[bnum++]=bfull2[random];
		break;
	case 3:
	switch (max2)
	{
	case 3:
		for(i=0;i<bhal2;i++)
			for(j=0;j<whal2;j++)
			if(bhalf2[i].x==whalf2[j].x && bhalf2[i].x==whalf2[j].x)
				{
				random=i;
				break;
				}
		if(random!=i)
		random=random%bhal2;
	break;
	default:random=random%bhal2;
	break;
	}
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
