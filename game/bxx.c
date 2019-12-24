int judgexx1(struct chess black);//judge ????b
int judgexx2(struct chess black);//judge b????


int judgexx1(struct chess black){
int x=black.x,y=black.y;
int A,B,C,D;
if(x==0)//b
	{
	A=0;
	B=0;
	C=0;
	D=0;
	}
else if(x==1)//?b
	{
	A=board[y][x-1];
	B=0;
	C=0;
	D=0;
	}
else if(x==2)//??b
	{
	A=board[y][x-1];
	B=board[y][x-2];
	C=0;
	D=0;
	}
else if(x==3)//???b
	{
	A=board[y][x-1];
	B=board[y][x-2];
	C=board[y][x-3];
	D=0;
	}
else//????b
	{
	A=board[y][x-1];
	B=board[y][x-2];
	C=board[y][x-3];
	D=board[y][x-4];
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
int x=black.x,y=black.y;
int A,B,C,D;
if(x==14)
	{
	A=0;
	B=0;
	C=0;
	D=0;
	}
else if(x==13)
	{
	A=board[y][x+1];
	B=0;
	C=0;
	D=0;
	}
else if(x==12)
	{
	A=board[y][x+1];
	B=board[y][x+2];
	C=0;
	D=0;
	}
else if(x==11)
	{
	A=board[y][x+1];
	B=board[y][x+2];
	C=board[y][x+3];
	D=0;
	}
else
	{
	A=board[y][x+1];
	B=board[y][x+2];
	C=board[y][x+3];
	D=board[y][x+4];
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
