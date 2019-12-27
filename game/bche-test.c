#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"init.c"
#include"bche-attack.c"

int main()
{
srand(time(NULL));//random function x
int x=0;
int i=0;
	init_board();
board[7][7]=11;
bnum=0;
bchess[bnum].x=7;
bchess[bnum++].y=7;
	display_board();
for(i=0;i<51;i++)
{
set_wchess();
display_board();
battack();
display_board();
}
return 0;	
}
