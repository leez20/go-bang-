//for attack 
int baxxjud(struct chess black);//judge black chess xx line
int bayyjud(struct chess black);//judge black chess yy line
int bauljud(struct chess black);//judge black chess up left line
int baurjud(struct chess black);//judge black chess up right line
int waxxjud(struct chess white);//judge white chess xx line
int wayyjud(struct chess white);//judge white chess yy line
int wauljud(struct chess white);//judge white chess up left line
int waurjud(struct chess white);//judge white chess up right line

//for defence
int dbaxxjud(struct chess black);//judge black chess xx line
int dbayyjud(struct chess black);//judge black chess yy line
int dbauljud(struct chess black);//judge black chess up left line
int dbaurjud(struct chess black);//judge black chess up right line
int dwaxxjud(struct chess white);//judge white chess xx line
int dwayyjud(struct chess white);//judge white chess yy line
int dwauljud(struct chess white);//judge white chess up left line
int dwaurjud(struct chess white);//judge white chess up right line

//for attack
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

//for defence 
int dbaxxjud(struct chess black){
int x1,x2;
x1=bajudxx1(black);
x2=bajudxx2(black);
return dbajud(x1,x2);
}

int dbayyjud(struct chess black){
int x1,x2;
x1=bajudyy1(black);
x2=bajudyy2(black);
return dbajud(x1,x2);
}

int dbauljud(struct chess black){
int x1,x2;
x1=bajudul1(black);
x2=bajudul2(black);
return dbajud(x1,x2);
}

int dbaurjud(struct chess black){
int x1,x2;
x1=bajudur1(black);
x2=bajudur2(black);
return dbajud(x1,x2);
}

int dwaxxjud(struct chess white){
int x1,x2;
x1=wajudxx1(white);
x2=wajudxx2(white);
return dwajud(x1,x2);
}

int dwayyjud(struct chess white){
int x1,x2;
x1=wajudyy1(white);
x2=wajudyy2(white);
return dwajud(x1,x2);
}

int dwauljud(struct chess white){
int x1,x2;
x1=wajudul1(white);
x2=wajudul2(white);
return dwajud(x1,x2);
}

int dwaurjud(struct chess white){
int x1,x2;
x1=wajudur1(white);
x2=wajudur2(white);
return dwajud(x1,x2);
}

