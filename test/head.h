
#define SIZE 15//board size

struct chess {//chess address
	int x;
	int y;
};

 int board[SIZE][SIZE];

 struct chess bchess[113];//half sife of boar225
 struct chess wchess[113];
 int bnum, wnum;

void init_board(void);
void display_board(void);
int set_bchess(char s[]);
int set_wchess(char s[]);
int Max(int x1, int x2, int x3, int x4);

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

int bajud(int x1, int x2);
int wajud(int x1, int x2);

int baxxjud(struct chess black);//judge black chess xx line
int bayyjud(struct chess black);//judge black chess yy line
int bauljud(struct chess black);//judge black chess up left line
int baurjud(struct chess black);//judge black chess up right line
int waxxjud(struct chess white);//judge white chess xx line
int wayyjud(struct chess white);//judge white chess yy line
int wauljud(struct chess white);//judge white chess up left line
int waurjud(struct chess white);//judge white chess up right line

static int binfo(void);
static int winfo(void);
void battack(void);

static int wbinfo(void);
static int wwinfo(void);
void wattack(void);
