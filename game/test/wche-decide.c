#include "wche-info.c"
#include "wche-judge.c"

int waxxjud(struct chess white);
int wayyjud(struct chess white);
int wauljud(struct chess white);
int waurjud(struct chess white);

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






