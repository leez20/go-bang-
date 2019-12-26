#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"init.c"
#include"bche-attack.c"

int main()
{
int x=0;
int i=0;
	init_board();
	display_board();
	set_bchess();//B1
	display_board();
printf("%d,%d\n",bchess[bnum-1].x,bchess[bnum-1].y);

	set_wchess();//W1
	display_board();


	battack();//B2
	
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();
	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();
	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();
	
	set_wchess();//W1
	display_board();


	battack();//B2
	
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();
	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();
	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W2
	display_board();

	battack();//B3

	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	set_wchess();//W3
	display_board();

	battack();//B4
	display_board();

	set_wchess();//W4
	display_board();

	battack();//B5
	display_board();

	set_wchess();//W5
	display_board();

	battack();//B6
	display_board();

	return 0;
}

/*
printf("bnum:%d	",bnum);
for(i=bnum;i>0;i--)
printf("y,x:%d,%c\n",SIZE-bchess[i-1].y,bchess[i-1].x+'A');
*/

