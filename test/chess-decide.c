#include"head.h"

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

int waxxjud(struct chess white){
int x1,x2;
x1=wajudxx1(white);
x2=wajudxx2(white);
return wajud(x1,x2);
}

int wayyjud(struct chess white){
int x1,x2;
x1=wajudyy1(white);
x2=wajudyy2(white);
return wajud(x1,x2);
}

int wauljud(struct chess white){
int x1,x2;
x1=wajudul1(white);
x2=wajudul2(white);
return wajud(x1,x2);
}

int waurjud(struct chess white){
int x1,x2;
x1=wajudur1(white);
x2=wajudur2(white);
return wajud(x1,x2);
}

