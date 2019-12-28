#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"init.c"
#include"wche-attack.c"

void main(void)
{
srand(time(NULL));//random function x

int i=0;
init_board();
display_board();
for(i=0;i<225;i++)
	{
	set_bchess();
	display_board();
	wattack();
	display_board();
	}
	
}


