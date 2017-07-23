#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
FILE *fpt;
typedef struct
{
	char p1_name[20];
	char p2_name[20];
	int p1_score;
	int p2_score;
	int p1_winstat;
	int p2_winstat;
	int p1_type;
	int p2_type;
}gameaoa;
gameaoa playerr, player;

int gd=DETECT, gm;

#define MAXSCORE 10
#include"flow.h"
#include"draw.h"

void main()
{
	int op;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	title();
	loading();
	while(op!=5)
	{
		op=menu();
		selection(op);
	}
	closegraph();
	clrscr();
	getch();
}
