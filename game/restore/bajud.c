#include "bxx.c"
#include "byy.c"
#include "bupleft.c"
#include "bupright.c"
#include "baxxjud.c"
 
/*
struct chess{
	int x;
	int y;
	};
*/

int baxxjud(struct chess black);
int bayyjud(struct chess black);
int bauljud(struct chess black);
int baurjud(struct chess black);

int baxxjud(struct chess black){
int x1,x2;
x1=bajudxx1(black);
x2=bajudxx2(black);
return bajud(x1,x2);
}

int bayyjud(struct chess black){
int x1,x2;
x1=bajudyy1(black);
x2=bajudyy2(black);
return bajud(x1,x2);
}

int bauljud(struct chess black){
int x1,x2;
x1=bajudul1(black);
x2=bajudul2(black);
return bajud(x1,x2);
}

int baurjud(struct chess black){
int x1,x2;
x1=bajudur1(black);
x2=bajudur2(black);
return bajud(x1,x2);
}






