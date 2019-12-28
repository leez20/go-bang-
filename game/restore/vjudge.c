#include"bche-decide.c"
static int Max(int x1,int x2,int x3,int x4)
	{
	int y1,y2;
	y1= (x1>x2?x1:x2);
	y2= (x3>x4?x3:x4);
	return y1>y2?y1:y2;
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

