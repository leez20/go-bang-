int judgexy1(struct chess black);//judge ????b
int judgexy2(struct chess black);//judge b????


int judgexy1(struct chess black){
int x0=black.x,y0=black.y;
int A,B,C,D;
int b=y0-x0,Y,X;
int i; ////func y=x+b  b=y0-x0
for(i=1;i<5;i++)
{
X=x0-i;
Y=X+b;
if(Y<0 || X<0)
	break;
}


if(i==1)//b
	{
	A=0;
	B=0;
	C=0;
	D=0;
	}
else if(i==2)//?b
	{
	A=board[y0-1][x0-1];
	B=0;
	C=0;
	D=0;
	}
else if(i==3)//??b
	{
	A=board[y0+1][x0-1];
	B=board[y0-1][x0-2];
	C=0;
	D=0;
	}
else if(i==4)//???b
	{
	A=board[y0-1][x0-1];
	B=board[y0-2][x0-2];
	C=board[y0-3][x0-3];
	D=0;
	}
else//????b
	{
	A=board[y0-1][x0-1];
	B=board[y0-2][x0-2];
	C=board[y0-3][x0-3];
	D=board[y0-4][x0-4];
	}

if(A==0 || A>11)
	return 0;//wb
else if(B==0 ||B>11)
	{
	if(A<10)
		return 1;//wob
	else
		return 2;//wbb
	}
else if(C==0 || C>11)
	{
	if(B<10)//wo?b
		{
		if(A<10)
			return 3;//woob
		else
			return 4;//wobb
		}
	else
		{
		if(A<10)
			return 5;//wbob
		else
			return 6;//wbbb
		}
	}
else if(D==0 ||D>11)
	{
	if(C<10)
		{
		if(B<10)
			{
			if(A<10)
				return 7;//wooob
			else
				return 8;//woobb
			}
		else
			{
			if(A<10)
				return 9;//wobob
			else
				return 10;//wobbb
			}
		}
	else
		{
		if(B<10)
			{
			if(A<10)
				return 11;//wboob
			else
				return 12;//wbobb
			}
		else
			{
			if(A<10)
				return 13;//wbbob
			else
				return 14;//wbbbb
			}
		}
	}
else//????b
  {
if(D<10)//o???b
	{
	if(C<10)
		{
		if(B<10)
			{
			if(A<10)
				return 15;//oooob
			else
				return 16;//ooobb
			}
		else
			{
			if(A<10)
				return 17;//oobob
			else
				return 18;//oobbb
			}
		}
	else
		{
		if(B<10)
			{
			if(A<10)
				return 19;//oboob
			else
				return 20;//obobb
			}
		else
			{
			if(A<10)
				return 21;//obbob
			else
				return 22;//obbbb
			}
		}
	}

else//b???b
	{
	if(C<10)
		{
		if(B<10)
			{
			if(A<10)
				return 23;//booob
			else
				return 24;//boobb
			}
		else
			{
			if(A<10)
				return 25;//bobob
			else
				return 26;//bobbb
			}
		}
	else
		{
		if(B<10)
			{
			if(A<10)
				return 27;//bboob
			else
				return 28;//bbobb
			}
		else
			{
			if(A<10)
				return 29;//bbbob
			else
				return 30;//bbbbb
			}
		}
	}

  }
}



int judgexx2(struct chess black){
int x0=black.x,y0=black.y;
int A,B,C,D;
int b=y0-x0,Y,X;
int i; ////func y=x+b  b=y0-x0
for(i=1;i<5;i++)
{
Y=y0+i;
Y=X+b;
if(Y>SIZE-1 || X>SIZE-1)
	break;
}


if(i==1)
	{
	A=0;
	B=0;
	C=0;
	D=0;
	}
else if(i==2)
	{
	A=board[y0+1][x0+1];
	B=0;
	C=0;
	D=0;
	}
else if(i==3)
	{
	A=board[y0+1][x0+1];
	B=board[y0+2][x0+2];
	C=0;
	D=0;
	}
else if(i==4)
	{
	A=board[y0+1][x0+1];
	B=board[y0+2][x0+2];
	C=board[y0+3][x0+3];
	D=0;
	}
else
	{
	A=board[y0+1][x0+1];
	B=board[y0+2][x0+2];
	C=board[y0+3][x0+3];
	D=board[y0+4][x0+4];
	}

if(A==0 ||A>11)
	return 0;//bw
else if(B==0 || B>11)
	{
	if(A<10)
		return 1;//bow
	else
		return 2;//bbw
	}
else if(C==0 ||C>11)
	{
	if(A<10)
		{
		if(B<10)
			return 3;//boow
		else 
			return 4;//bobw
		}
	else
		{
		if(B<10)
			return 5;//bbow
		else 
			return 6;//bbbw
		}

	}
else if(D==0 || D>11)
	if(A<10)
		{
		if(B<10)
			{
			if(C<10)
				return 7;//booow
			else
				return 8;//boobw;
			}
		else
			{
			if(C<10)
				return 9;//bobow
			else
				return 10;//bobbw;
			}
		}
	else
		{
		if(B<10)
			{
			if(C<10)
				return 11;//bboow
			else
				return 12;//bbobw;
			}
		else
			{
			if(C<10)
				return 13;//bbbow
			else
				return 14;//bbbbw;
			}
		}
else
  {
if(A<10)
	{
	if(B<10)
		{
		if(C<10)
			{
			if(D<10)
				return 15;//boooo
			else
				return 16;//booob
			}
		else
			{
			if(D<10)
				return 17;//boobo
			else
				return 18;//boobb
			}
		}
	else
		{
		if(C<10)
			{
			if(D<10)
				return 19;//boboo
			else
				return 20;//bobob
			}
		else
			{
			if(D<10)
				return 21;//bobbo
			else
				return 22;//bobbb
			}
		}
	}
else
	{
	if(B<10)
		{
		if(C<10)
			{
			if(D<10)
				return 23;//bbooo
			else
				return 24;//bboob
			}
		else
			{
			if(D<10)
				return 25;//bbobo
			else
				return 26;//bbobb
			}
		}
	else
		{
		if(C<10)
			{
			if(D<10)
				return 27;//bbboo
			else
				return 28;//bbbob
			}
		else
			{
			if(D<10)
				return 29;//bbbbo
			else
				return 30;//bbbbb
			}
		}
	}
  }
}
