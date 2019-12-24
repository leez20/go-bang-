

/*struct chess {
	int x;
	int y;
	};
*/

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


int battack(struct chess black){
int x1=0;
int x2=0;
x1=judgexx1(black);
x2=judgexx2(black);
/*
1 half1
2 full1
3 half2
4 full2
5 half3
6 full3
7 half4
8 full4
9success
*/

if(x1==0)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 0;
	case 4:return 0;
	case 5:return 0;
	case 6:return 0;
	case 7:return 0;
	case 8:return 0;
	case 9:return 0;
	case 10:return 0;
	case 11:return 0;
	case 12:return 0;
	case 13:return 0;
	case 14:return 0;
	case 15:return 1;//half1
	case 16:return 1;
	case 17:return 1;
	case 18:return 1;
	case 19:return 3;//half2
	case 20:return 3;
	case 21:return 5;//half3
	case 22:return 7;//half4
	case 23:return 3;
	case 24:return 3;
	case 25:return 5;
	case 26:return 7;
	case 27:return 5;
	case 28:return 7;
	case 29:return 7;
	case 30:return 9;//success
	}
else if(x1==1)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 0;
	case 4:return 0;
	case 5:return 0;
	case 6:return 0;
	case 7:return 0;
	case 8:return 1;
	case 9:return 3;
	case 10:return 5;
	case 11:return 3;
	case 12:return 5;
	case 13:return 5;
	case 14:return 7;
	case 15:return 2;
	case 16:return 2;
	case 17:return 2;
	case 18:return 2;
	case 19:return 3;
	case 20:return 3;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 2;
	case 25:return 5;
	case 26:return 7;
	case 27:return 5;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==2)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 0;
	case 4:return 0;
	case 5:return 0;
	case 6:return 0;
	case 7:return 0;
	case 8:return 3;
	case 9:return 3;
	case 10:return 7;
	case 11:return 5;
	case 12:return 7;
	case 13:return 7;
	case 14:return 8;
	case 15:return 3;
	case 16:return 3;
	case 17:return 3;
	case 18:return 3;
	case 19:return 5;
	case 20:return 5;
	case 21:return 7;
	case 22:return 7;
	case 23:return 5;
	case 24:return 5;
	case 25:return 7;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==3)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 1;
	case 4:return 3;
	case 5:return 3;
	case 6:return 5;
	case 7:return 1;
	case 8:return 1;
	case 9:return 3;
	case 10:return 5;
	case 11:return 4;
	case 12:return 5;
	case 13:return 5;
	case 14:return 7;
	case 15:return 2;
	case 16:return 2;
	case 17:return 2;
	case 18:return 2;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 4;
	case 25:return 5;
	case 26:return 7;
	case 27:return 6;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==4)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 4;
	case 4:return 5;
	case 5:return 5;
	case 6:return 7;
	case 7:return 3;
	case 8:return 3;
	case 9:return 5;
	case 10:return 7;
	case 11:return 6;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 3;
	case 16:return 3;
	case 17:return 3;
	case 18:return 3;
	case 19:return 6;
	case 20:return 6;
	case 21:return 7;
	case 22:return 7;
	case 23:return 6;
	case 24:return 6;
	case 25:return 7;
	case 26:return 8;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==5)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 3;
	case 4:return 3;
	case 5:return 5;
	case 6:return 7;
	case 7:return 3;
	case 8:return 3;
	case 9:return 3;
	case 10:return 5;
	case 11:return 5;
	case 12:return 5;
	case 13:return 7;
	case 14:return 7;
	case 15:return 3;
	case 16:return 3;
	case 17:return 3;
	case 18:return 3;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 5;
	case 24:return 5;
	case 25:return 5;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==6)
switch(x2)
	{
	case 0:return 0;
	case 1:return 0;
	case 2:return 0;
	case 3:return 5;
	case 4:return 7;
	case 5:return 7;
	case 6:return 9;
	case 7:return 5;
	case 8:return 5;
	case 9:return 7;
	case 10:return 7;
	case 11:return 7;
	case 12:return 7;
	case 13:return 9;
	case 14:return 9;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 7;
	case 23:return 7;
	case 24:return 7;
	case 25:return 7;
	case 26:return 7;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==7)
switch(x2)
	{
	case 0:return 0;
	case 1:return 2;
	case 2:return 3;
	case 3:return 2;
	case 4:return 3;
	case 5:return 3;
	case 6:return 5;
	case 7:return 2;
	case 8:return 2;
	case 9:return 4;
	case 10:return 5;
	case 11:return 4;
	case 12:return 5;
	case 13:return 5;
	case 14:return 7;
	case 15:return 2;
	case 16:return 2;
	case 17:return 2;
	case 18:return 2;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 4;
	case 25:return 5;
	case 26:return 7;
	case 27:return 6;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==8)
switch(x2)
	{
	case 0:return 0;
	case 1:return 3;
	case 2:return 5;
	case 3:return 4;
	case 4:return 5;
	case 5:return 6;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 5;
	case 10:return 7;
	case 11:return 6;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 5;
	case 20:return 5;
	case 21:return 7;
	case 22:return 7;
	case 23:return 6;
	case 24:return 6;
	case 25:return 7;
	case 26:return 7;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==9)
switch(x2)
	{
	case 0:return 0;
	case 1:return 3;
	case 2:return 5;
	case 3:return 4;
	case 4:return 4;
	case 5:return 5;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 4;
	case 10:return 4;
	case 11:return 5;
	case 12:return 5;
	case 13:return 7;
	case 14:return 7;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 4;
	case 20:return 4;
	case 21:return 4;
	case 22:return 7;
	case 23:return 5;
	case 24:return 5;
	case 25:return 5;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==10)
switch(x2)
	{
	case 0:return 0;
	case 1:return 5;
	case 2:return 7;
	case 3:return 5;
	case 4:return 5;
	case 5:return 5;
	case 6:return 9;
	case 7:return 5;
	case 8:return 5;
	case 9:return 7;
	case 10:return 7;
	case 11:return 8;
	case 12:return 8;
	case 13:return 9;
	case 14:return 9;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 7;
	case 23:return 8;
	case 24:return 8;
	case 25:return 8;
	case 26:return 8;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==11)
switch(x2)
	{
	case 0:return 0;
	case 1:return 1;
	case 2:return 1;
	case 3:return 1;
	case 4:return 1;
	case 5:return 1;
	case 6:return 1;
	case 7:return 1;
	case 8:return 1;
	case 9:return 1;
	case 10:return 1;
	case 11:return 1;
	case 12:return 1;
	case 13:return 1;
	case 14:return 1;
	case 15:return 1;
	case 16:return 1;
	case 17:return 1;
	case 18:return 1;
	case 19:return 1;
	case 20:return 1;
	case 21:return 1;
	case 22:return 1;
	case 23:return 1;
	case 24:return 1;
	case 25:return 1;
	case 26:return 1;
	case 27:return 1;
	case 28:return 1;
	case 29:return 1;
	case 30:return 1;
	}
else if(x1==12)
switch(x2)
	{
	case 0:return 0;
	case 1:return 5;
	case 2:return 7;
	case 3:return 5;
	case 4:return 5;
	case 5:return 7;
	case 6:return 7;
	case 7:return 7;
	case 8:return 7;
	case 9:return 5;
	case 10:return 5;
	case 11:return 7;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 5;
	case 20:return 5;
	case 21:return 5;
	case 22:return 7;
	case 23:return 6;
	case 24:return 6;
	case 25:return 6;
	case 26:return 7;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==13 )
switch(x2)
	{
	case 0:return 0;
	case 1:return 5;
	case 2:return 7;
	case 3:return 5;
	case 4:return 5;
	case 5:return 7;
	case 6:return 7;
	case 7:return 5;
	case 8:return 5;
	case 9:return 5;
	case 10:return 5;
	case 11:return 7;
	case 12:return 7;
	case 13:return 7;
	case 14:return 7;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 5;
	case 20:return 5;
	case 21:return 5;
	case 22:return 7;
	case 23:return 7;
	case 24:return 7;
	case 25:return 7;
	case 26:return 8;
	case 27:return 7;
	case 28:return 8;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 14)
switch(x2)
	{
	case 0:return 0;
	case 1:return 7;
	case 2:return 9;
	case 3:return 7;
	case 4:return 7;
	case 5:return 9;
	case 6:return 9;
	case 7:return 7;
	case 8:return 7;
	case 9:return 7;
	case 10:return 7;
	case 11:return 9;
	case 12:return 9;
	case 13:return 9;
	case 14:return 9;
	case 15:return 7;
	case 16:return 7;
	case 17:return 7;
	case 18:return 7;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 7;
	case 23:return 9;
	case 24:return 9;
	case 25:return 9;
	case 26:return 9;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1== 15)
switch(x2)
	{
	case 0:return 1;
	case 1:return 2;
	case 2:return 3;
	case 3:return 1;
	case 4:return 3;
	case 5:return 3;
	case 6:return 5;
	case 7:return 1;
	case 8:return 1;
	case 9:return 3;
	case 10:return 5;
	case 11:return 4;
	case 12:return 5;
	case 13:return 5;
	case 14:return 7;
	case 15:return 1;
	case 16:return 1;
	case 17:return 1;
	case 18:return 1;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 4;
	case 25:return 5;
	case 26:return 7;
	case 27:return 6;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 16)
switch(x2)
	{
	case 0:return 3;
	case 1:return 3;
	case 2:return 5;
	case 3:return 4;
	case 4:return 5;
	case 5:return 6;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 5;
	case 10:return 7;
	case 11:return 6;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 5;
	case 20:return 5;
	case 21:return 7;
	case 22:return 7;
	case 23:return 6;
	case 24:return 6;
	case 25:return 7;
	case 26:return 7;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1== 17)
switch(x2)
	{
	case 0:return 3;
	case 1:return 3;
	case 2:return 5;
	case 3:return 4;
	case 4:return 4;
	case 5:return 5;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 4;
	case 10:return 4;
	case 11:return 5;
	case 12:return 5;
	case 13:return 7;
	case 14:return 7;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 4;
	case 20:return 4;
	case 21:return 4;
	case 22:return 7;
	case 23:return 5;
	case 24:return 5;
	case 25:return 5;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 18)
switch(x2)
	{
	case 0:return 5;
	case 1:return 6;
	case 2:return 7;
	case 3:return 6;
	case 4:return 7;
	case 5:return 8;
	case 6:return 9;
	case 7:return 6;
	case 8:return 6;
	case 9:return 7;
	case 10:return 7;
	case 11:return 8;
	case 12:return 8;
	case 13:return 9;
	case 14:return 9;
	case 15:return 6;
	case 16:return 6;
	case 17:return 6;
	case 18:return 6;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 7;
	case 23:return 8;
	case 24:return 8;
	case 25:return 8;
	case 26:return 8;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==19)
switch(x2)
	{
	case 0:return 1;
	case 1:return 1;
	case 2:return 1;
	case 3:return 1;
	case 4:return 1;
	case 5:return 1;
	case 6:return 1;
	case 7:return 1;
	case 8:return 1;
	case 9:return 1;
	case 10:return 1;
	case 11:return 1;
	case 12:return 1;
	case 13:return 1;
	case 14:return 1;
	case 15:return 1;
	case 16:return 1;
	case 17:return 1;
	case 18:return 1;
	case 19:return 1;
	case 20:return 1;
	case 21:return 1;
	case 22:return 1;
	case 23:return 1;
	case 24:return 1;
	case 25:return 1;
	case 26:return 1;
	case 27:return 1;
	case 28:return 1;
	case 29:return 1;
	case 30:return 1;
	}
else if(x1== 20)
switch(x2)
	{
	case 0:return 5;
	case 1:return 5;
	case 2:return 7;
	case 3:return 5;
	case 4:return 5;
	case 5:return 7;
	case 6:return 7;
	case 7:return 5;
	case 8:return 5;
	case 9:return 5;
	case 10:return 7;
	case 11:return 7;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 5;
	case 20:return 5;
	case 21:return 7;
	case 22:return 7;
	case 23:return 7;
	case 24:return 7;
	case 25:return 8;
	case 26:return 8;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1== 21)
switch(x2)
	{
	case 0:return 5;
	case 1:return 5;
	case 2:return 7;
	case 3:return 5;
	case 4:return 5;
	case 5:return 7;
	case 6:return 7;
	case 7:return 5;
	case 8:return 5;
	case 9:return 5;
	case 10:return 5;
	case 11:return 7;
	case 12:return 7;
	case 13:return 7;
	case 14:return 7;
	case 15:return 5;
	case 16:return 5;
	case 17:return 5;
	case 18:return 5;
	case 19:return 5;
	case 20:return 5;
	case 21:return 5;
	case 22:return 7;
	case 23:return 7;
	case 24:return 7;
	case 25:return 7;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 22)
switch(x2)
	{
	case 0:return 7;
	case 1:return 8;
	case 2:return 9;
	case 3:return 8;
	case 4:return 8;
	case 5:return 9;
	case 6:return 9;
	case 7:return 8;
	case 8:return 8;
	case 9:return 8;
	case 10:return 8;
	case 11:return 9;
	case 12:return 9;
	case 13:return 9;
	case 14:return 9;
	case 15:return 8;
	case 16:return 8;
	case 17:return 8;
	case 18:return 8;
	case 19:return 8;
	case 20:return 8;
	case 21:return 8;
	case 22:return 8;
	case 23:return 9;
	case 24:return 9;
	case 25:return 9;
	case 26:return 9;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==23 )
switch(x2)
	{
	case 0:return 1;
	case 1:return 2;
	case 2:return 3;
	case 3:return 1;
	case 4:return 3;
	case 5:return 3;
	case 6:return 5;
	case 7:return 1;
	case 8:return 1;
	case 9:return 3;
	case 10:return 5;
	case 11:return 4;
	case 12:return 5;
	case 13:return 6;
	case 14:return 7;
	case 15:return 1;
	case 16:return 1;
	case 17:return 1;
	case 18:return 1;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 4;
	case 25:return 5;
	case 26:return 7;
	case 27:return 6;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 24)
switch(x2)
	{
	case 0:return 3;
	case 1:return 3;
	case 2:return 5;
	case 3:return 4;
	case 4:return 5;
	case 5:return 6;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 5;
	case 10:return 7;
	case 11:return 6;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 5;
	case 20:return 5;
	case 21:return 7;
	case 22:return 7;
	case 23:return 6;
	case 24:return 6;
	case 25:return 7;
	case 26:return 7;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==25 )
switch(x2)
	{
	case 0:return 3;
	case 1:return 4;
	case 2:return 5;
	case 3:return 4;
	case 4:return 4;
	case 5:return 5;
	case 6:return 7;
	case 7:return 4;
	case 8:return 4;
	case 9:return 4;
	case 10:return 5;
	case 11:return 5;
	case 12:return 5;
	case 13:return 7;
	case 14:return 7;
	case 15:return 4;
	case 16:return 4;
	case 17:return 4;
	case 18:return 4;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 5;
	case 24:return 5;
	case 25:return 5;
	case 26:return 7;
	case 27:return 7;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 26)
switch(x2)
	{
	case 0:return 7;
	case 1:return 7;
	case 2:return 7;
	case 3:return 7;
	case 4:return 7;
	case 5:return 8;
	case 6:return 9;
	case 7:return 7;
	case 8:return 7;
	case 9:return 7;
	case 10:return 7;
	case 11:return 8;
	case 12:return 8;
	case 13:return 9;
	case 14:return 9;
	case 15:return 7;
	case 16:return 7;
	case 17:return 7;
	case 18:return 7;
	case 19:return 7;
	case 20:return 7;
	case 21:return 8;
	case 22:return 8;
	case 23:return 8;
	case 24:return 8;
	case 25:return 8;
	case 26:return 8;
	case 27:return 9;
	case 28:return 9;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1==27 )
switch(x2)
	{
	case 0:return 1;
	case 1:return 2;
	case 2:return 3;
	case 3:return 1;
	case 4:return 3;
	case 5:return 3;
	case 6:return 5;
	case 7:return 2;
	case 8:return 2;
	case 9:return 4;
	case 10:return 5;
	case 11:return 4;
	case 12:return 5;
	case 13:return 6;
	case 14:return 7;
	case 15:return 2;
	case 16:return 2;
	case 17:return 2;
	case 18:return 2;
	case 19:return 4;
	case 20:return 4;
	case 21:return 5;
	case 22:return 7;
	case 23:return 4;
	case 24:return 4;
	case 25:return 5;
	case 26:return 7;
	case 27:return 6;
	case 28:return 7;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1== 28)
switch(x2)
	{
	case 0:return 7;
	case 1:return 7;
	case 2:return 7;
	case 3:return 7;
	case 4:return 7;
	case 5:return 7;
	case 6:return 7;
	case 7:return 7;
	case 8:return 7;
	case 9:return 7;
	case 10:return 7;
	case 11:return 7;
	case 12:return 7;
	case 13:return 8;
	case 14:return 9;
	case 15:return 7;
	case 16:return 7;
	case 17:return 7;
	case 18:return 7;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 8;
	case 23:return 7;
	case 24:return 7;
	case 25:return 7;
	case 26:return 8;
	case 27:return 8;
	case 28:return 8;
	case 29:return 9;
	case 30:return 9;
	}
else if(x1== 29)
switch(x2)
	{
	case 0:return 7;
	case 1:return 7;
	case 2:return 7;
	case 3:return 7;
	case 4:return 7;
	case 5:return 7;
	case 6:return 7;
	case 7:return 7;
	case 8:return 7;
	case 9:return 7;
	case 10:return 7;
	case 11:return 7;
	case 12:return 7;
	case 13:return 7;
	case 14:return 7;
	case 15:return 7;
	case 16:return 7;
	case 17:return 7;
	case 18:return 7;
	case 19:return 7;
	case 20:return 7;
	case 21:return 7;
	case 22:return 8;
	case 23:return 7;
	case 24:return 7;
	case 25:return 7;
	case 26:return 8;
	case 27:return 7;
	case 28:return 8;
	case 29:return 8;
	case 30:return 9;
	}
else if(x1==30)
return 9;
/*	
else if(x1== )
switch(x2)
	{
	case 0:return ;
	case 1:return ;
	case 2:return ;
	case 3:return ;
	case 4:return ;
	case 5:return ;
	case 6:return ;
	case 7:return ;
	case 8:return ;
	case 9:return ;
	case 10:return ;
	case 11:return ;
	case 12:return ;
	case 13:return ;
	case 14:return ;
	case 15:return ;
	case 16:return ;
	case 17:return ;
	case 18:return ;
	case 19:return ;
	case 20:return ;
	case 21:return ;
	case 22:return ;
	case 23:return ;
	case 24:return ;
	case 25:return ;
	case 26:return ;
	case 27:return ;
	case 28:return ;
	case 29:return ;
	case 30:return ;
	}
*/

}//func end


