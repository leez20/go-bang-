#include<stdio.h>
#include"init.c"
#include"wche-attack.c"

int main()
{
srand(time(NULL));//random function x
int x=0;
int i=0;
	init_board();
	display_board();

	set_bchess();//W1
	display_board();

	wattack();//B1
	display_board();

	set_bchess();//W1
	display_board();

	wattack();
	display_board();

	set_bchess();//W1
	display_board();

	wattack();//B2
	display_board();

	set_bchess();//W2
	display_board();
	
	wattack();//B3
	display_board();

	set_bchess();//W3
	display_board();

	wattack();//B4
	display_board();

	set_bchess();//W4
	display_board();



	wattack();//B5
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();


	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();


	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();


	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	set_bchess();//W5
	display_board();

	wattack();//B6
	display_board();

	return 0;
}
/*
printf("wnum:%d	",wnum);
for(i=wnum;i>0;i--)
printf("\ny,x:%d,%c\n",SIZE-wchess[i-1].y,wchess[i-1].x+'A');

printf("bnum:%d	",bnum);
for(i=bnum;i>0;i--)
printf("\ny,x:%d,%c\n",SIZE-bchess[i-1].y,bchess[i-1].x+'A');
*/

