static struct chess wblack,wbsuccess,wbfull4[10],wbhalf4[10],wbfull3[10],wbhalf3[10],wbfull2[10],wbhalf2[10],wbfull1[10],wbhalf1;
static int wbful4,wbful3,wbful2,wbful1;//full
static int wbhal4,wbhal3,wbhal2;//half

static struct chess wwhite,wwsuccess,wwfull4[10],wwhalf4[10],wwfull3[10],wwhalf3[10],wwfull2[10],wwhalf2[10], wwfull1[10],wwhalf1;
static int wwful4, wwful3,wwful2,wwful1;//full
static int wwhal4,wwhal3,wwhal2;//half

int wbinfo(void){
wbful4=0,wbful3=0,wbful2=0,wbful1=0,wbhal4=0,wbhal3=0,wbhal2=0;//initialize
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
		wblack.x=i;
		wblack.y=j;
		value[0]=baxxjud(wblack);
		value[1]=bayyjud(wblack);
		value[2]=bauljud(wblack);
		value[3]=baurjud(wblack);

		switch(Max(value[0],value[1],value[2],value[3]))
		{
		case 9:
			wbsuccess=wblack;
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
				if(wbful4<10)
					wbfull4[wbful4++]=wblack;
				else
					wbfull4[9]=wblack;
				max=(max>8?max:8);
				}
			break;

		case 7:
			if(wbhal4<10)
				wbhalf4[wbhal4++]=wblack;
			else
				wbhalf4[9]=wblack;
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
				if(wbful3<10)
					wbfull3[wbful3++]=wblack;
				else 
					wbfull3[9]=wblack;
				max=(max>6?max:6);
				}
			break;

		case 5:
			if(wbhal3<10)
				wbhalf3[wbhal3++]=wblack;
			else
				wbhalf3[9]=wblack;
			max=(max>5?max:5);
			break;

		case 4:
			if(wbful2<10)
				wbfull2[wbful2++]=wblack;
			else
				wbfull2[9]=wblack;
			max=(max>4?max:4);
			break;

		case 3:
			if(wbhal2<10)
				wbhalf2[wbhal2++]=wblack;
			else
				wbhalf2[9]=wblack;
			max=(max>3?max:3);
			break;

		case 2:
			if(wbful1<10)
				wbfull1[wbful1++]=wblack;
			else
				wbfull1[9]=wblack;
			max=(max>2?max:2);
			break;

		case 1:
			wbhalf1=wblack;
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

int wwinfo(void){
 wwful4=0,wwhal4=0;wwful3=0;wwful2=0;wwful1=0; wwhal3=0;wwhal2=0;//initialize
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
		wwhite.x=i;
		wwhite.y=j;
		value[0]=waxxjud(wwhite);
		value[1]=wayyjud(wwhite);
		value[2]=wauljud(wwhite);
		value[3]=waurjud(wwhite);
switch(Max(value[0],value[1],value[2],value[3]))
			{

		case 9:
			wwsuccess=wwhite;
			max=9;
			break;
			
		case 8:
			if(wwful4<10)
				wwfull4[wwful4++]=wwhite;
			else
				wwfull4[9]=wwhite;	
			max=(max>8?max:8);
			break;

		case 7:
			if(wwhal4<10)
				wwhalf4[wwhal4++]=wwhite;
			else
				wwhalf4[9]=wwhite;
			max=(max>7?max:7);
			break;

		case  6:
			if(wwful3<10)
				wwfull3[wwful3++]=wwhite;
			else 
				wwfull3[9]=wwhite;
			max=(max>6?max:6);
			break;

		case 5:
			if(wwhal3<10)
				wwhalf3[wwhal3++]=wwhite;
			else
				wwhalf3[9]=wwhite;
			max=(max>5?max:5);
			break;

		case 4:
			if(wwful2<10)
				wwfull2[wwful2++]=wwhite;
			else
				wwfull2[9]=wwhite;
			max=(max>4?max:4);
			break;

		case 3:
			if(wwhal2<10)
				wwhalf2[wwhal2++]=wwhite;
			else
				wwhalf2[9]=wwhite;
			max=(max>3?max:3);
			break;

		case 2:
			if(wwful1<10)
				wwfull1[wwful1++]=wwhite;
			else
				wwfull1[9]=wwhite;
			max=(max>2?max:2);
			break;

		case 1:
			wwhalf1=wwhite;
			max=(max>1?max:1);
			break;
			}
		}
	}
return max;
}

void wattack(void){
int max1=0,max2=0;
max1=wbinfo();
max2=wwinfo();
int i,j;
int signal=0;
int random=rand();// get random integer
if(max2>=max1)
{
	switch(max2)
	{
	case 9:
		board[wwsuccess.y][wwsuccess.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwsuccess;
		break;
	case 8:
		switch (max1)
		{
			case 8:
				for(i=0;i<wwful4;i++)
					for(j=0;j<wbful4;j++)
					if(wwfull4[i].x==wbfull4[j].x && wwfull4[i].y==wbfull4[j].y)
						{
						signal=1;
						random=i;
						break;
						}
				if(signal!=1)
				  random=random%wwful4;
			break;
			default:random=random%wwful4;
			break;
		}	
		board[wwfull4[random].y][wwfull4[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwfull4[random];
		break;
	case 7:
		random=random%wwhal4;
		board[wwhalf4[random].y][wwhalf4[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwhalf4[random];
		break;
	case 6:
		random=random%wwful3;
		board[wwfull3[random].y][wwfull3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwfull3[random];
		break;
	case 5:
		random=random%wwhal3;
		board[wwhalf3[random].y][wwhalf3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;;
		wchess[wnum++]=whalf3[random];
		break;
	case 4:
		random=random%wwful2;
		board[wwfull2[random].y][wwfull2[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwfull2[random];
		break;
	case 3:
		random=random%wwhal2;
		board[wwhalf2[random].y][wwhalf2[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwhalf2[random];
		break;
	case 2:
		random=random%wful1;
		board[wwfull1[random].y][wwfull1[random].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwfull1[random];
		break;
	case 1:
		board[wwhalf1.y][wwhalf1.x]=13;
		if(wnum)	
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wwhalf1;
		break;
	default :break;
	}
}
else
	switch(max1)
	{
	case 9:
		board[wbsuccess.y][wbsuccess.x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbsuccess;
		break;
	case 8:
		random=random%wbful4;
		board[wbfull4[random].y][wbfull4[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbfull4[random];
		break;
	case 7:
		random=random%wbhal4;
		board[wbhalf4[random].y][wbhalf4[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbhalf4[random];
		break;
	case 6:
		random=random%wbful3;
		board[wbfull3[random].y][wbfull3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbfull3[random];
		break;
	case 5:
		random=random%wbhal3;
		board[wbhalf3[random].y][wbhalf3[random].x]=13;
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbhalf3[random];
		break;
	case 4:
		random=random%wbful2;
		board[wbfull2[random].y][wbfull2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbfull2[random];
		break;
	case 3:
		random=random%wbhal2;
		board[wbhalf2[random].y][wbhalf2[random].x]=13;
		if(wnum)
		board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbhalf2[random];
		break;
	case 2:
		random=random%wbful1;
		board[wbfull1[random].y][wbfull1[random].x]=13;
		if(wnum)
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbfull1[random];
		break;
	case 1:
		board[wbhalf1.y][wbhalf1.x]=13;
		if(wnum)	
			board[wchess[wnum-1].y][wchess[wnum-1].x]=12;
		wchess[wnum++]=wbhalf1;
		break;
	default :break;
	}
}
