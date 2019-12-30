
#define SIZE 15//board size

static int board[SIZE][SIZE]={0};

struct chess {//chess address
int x;
int y;
};

static struct chess bchess[113];//half sife of boar225
static struct chess wchess[113];
static int  bnum=0,wnum=0;
void init_board(void);
void display_board(void);
int bajudxx1(struct chess black);
int bajudxx2(struct chess black);
int bajudyy1(struct chess black);
int bajudyy2(struct chess black);
int bajudul1(struct chess black);
int bajudul2(struct chess black);
int bajudur1(struct chess black);
int bajudur2(struct chess black);
int wajudxx1(struct chess black);
int wajudxx2(struct chess black);
int wajudyy1(struct chess black);
int wajudyy2(struct chess black);
int wajudul1(struct chess black);
int wajudul2(struct chess black);
int wajudur1(struct chess black);
int wajudur2(struct chess black);

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

int Max(int x1,int x2,int x3,int x4);


int set_bchess(char s[]);
int set_wchess(char s[]);
int bajud(int x1,int x2);
int wajud(int x1,int x2);
int dbajud(int x1,int x2);
int dwajud(int x1,int x2);



void battack(void);
void wattack(void);
