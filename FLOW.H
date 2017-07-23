void title(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int a=290,b=30;
	int z[5]={14,4,1,0,15};
	for(int i=0;i<=8;i++)
	{
		cleardevice();
		sound(500+i*140);
		settextstyle(GOTHIC_FONT,0,0+i);
		setcolor(2);
		rectangle(10,getmaxy()-10,getmaxx()-10,10);
		setcolor(14);
		rectangle(15,getmaxy()-15,getmaxx()-15,15);
		setcolor(14);
		rectangle(20,getmaxy()-20,getmaxx()-20,20);
		setcolor(4);
		outtextxy(a+5,b+5,"Age of Arrows");
		setcolor(15);
		outtextxy(a,b,"Age of Arrows");
		a-=30;
		b+=35;
		delay(50);
	}
	sound(800);
	delay(250);
	sound(400);
	delay(350);
	nosound();
	a=1;
	b=0;
	for(i=0;i<=80;i+=10)
	{
		if(a%2==0)
		{
			b++;
		}
		setcolor(14);
		ellipse(230,190,0,360,4+i,45+i);
		setfillstyle(LINE_FILL,z[b]);
		floodfill(232+i,190,14);
		a++;
		delay(300);
	}
	delay(100);
	setcolor(15);
	line(230,188-8,370,180-8);
	line(230,192-8,370,184-8);
	line(230,189-8,370,181-8);
	line(230,193-8,370,185-8);

	line(350-5,185-8,368-5,185-8+10);
	line(350+20,185-8,368+20,185-8+10);
	line(350-5,185-8+1,368-5,185-8+10+1);
	line(350+20,185-8+1,368+20,185-8+10+1);

	line(350-5,185-8-5,368-5,185-8+10-25);
	line(350+20,185-8-5,368+20,185-8+10-25);
	line(350-5,185-8+1-5,368-5,185-8+10+1-25);
	line(350+20,185-8+1-5,368+20,185-8+10+1-25);

	line(368-5,185-8+10-25,368+20,185-8+10-25);
	line(368-5,185-8+10,368+20,185-8+10);
	setfillstyle(LINE_FILL,2);
	floodfill(368,182,15);
	floodfill(368,165,15);

	delay(300);
	line(230,188+3,370,180+19);
	line(230,192+3,370,184+19);
	line(230,189+3,370,181+19);
	line(230,193+3,370,185+19);

	line(350-5,185+19,363-5,185+19+10);
	line(350+20,185+19,363+20,185+19+10);
	line(350-5,185+19+1,363-5,185+19+10+1);
	line(350+20,185+19+1,363+20,185+19+10+1);

	line(350-5,185+19-5,363-5,185+19+10-25);
	line(350+20,185+19-5,363+20,185+19+10-25);
	line(350-5,185+19+1-5,363-5,185+19+10+1-25);
	line(350+20,185+19+1-5,363+20,185+19+10+1-25);

	line(363-5,185+19+10-25,363+20,185+19+10-25);
	line(363-5,185+19+10,363+20,185+19+10);
	setfillstyle(LINE_FILL,4);
	floodfill(368,195,15);
	floodfill(360,207,15);
	delay(300);
	settextstyle(DEFAULT_FONT,0,0);
	do
	{
		if(a%2==0)
		b=15;
		else
		b=0;
		setcolor(b);
		outtextxy(250,430,"Press any Key");
		a++;
		delay(300);
	}while(!kbhit());
	getch();
	flushall();
	cleardevice();
}

void loading(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int num,i,j,a=-1;
	int Z[8]={1,20,30,200,1,5,10,5};
	char abc[80];
	cleardevice();
	settextstyle(DEFAULT_FONT,0,0);
	for(i=0;i<=400;i+=2)
	{
		num=rand()%8;
		cleardevice();
		rectangle(90+10,220,510+10,180);
		if(i<=360)
		arc(488+10,190,0,0+i,8);
		else
		arc(488+10,190,0,360,8);
		if(i%4==0)
		{
			a++;
		}
		outtextxy(100+10,190,"Loading");
		sprintf(abc,"%d\%",a);
		outtextxy(200+10,190,abc);
		rectangle(100+10,210,500+10,200);
		rectangle(100+10,210,100+i+10,200);
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(101+10,205,WHITE);

		delay(Z[num]);
	}
	settextstyle(GOTHIC_FONT,0,5);
	outtextxy(150,230,"Loading Complete");
	delay(500);
	outtextxy(60,280,"Press Any Key To Continue");
	getch();
	settextstyle(DEFAULT_FONT,0,5);
}

void selection(int op)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	if(op==1)
	{
		void choosePlayer();
		void theGame(void);
		op=0;
		closegraph();
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		choosePlayer();
		theGame();
	}
	else if(op==2)
	{
		void howtoControl(void);
		op=0;
		closegraph();
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		cleardevice();
		clrscr();
		howtoControl();
	}
	else if(op==3)
	{
		void readFile(void);
		int menu (void);
		op=0;
		closegraph();
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		cleardevice();
		clrscr();
		readFile();
	
	}
	else if(op==4)
	{
		void credits(void);
		op=0;
		closegraph();
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		cleardevice();
		clrscr();
		credits();
	}
	else if(op==5)
	{
		op=0;
		cleardevice();
		closegraph();
		clrscr();
		gotoxy(30,10);
		printf("Thank You For Playing...\n");
		delay(1000);
		exit(1);
	}
	int menu(void);
	op=menu();
	selection(op);
}

int menu(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int op=1, i=0, j=0;
	int y;
	do
	{
		cleardevice();
		setcolor(GREEN);
		rectangle(50,100,600,320);
		line(50,250,600,250);
		outtextxy(155,135,"1.Start Game");
		outtextxy(155,155,"2.How to Play?");
		outtextxy(155,175,"3.High Scores");
		outtextxy(155,195,"4.Credits");
		outtextxy(155,215,"5.Exit");
		outtextxy(155,280,"Choose any Option and press Enter to Select");
		rectangle(150+i,130+j,270+i,148+j);
		y=getch();
		{
			if(y==72)
			{
				j-=20;
				op--;
			}
			else if(y==80)
			{
				j+=20;
				op++;
			}
			else
			{
				j=j;
			}
			if(j<0)
			{
				j=80;
				op=5;
			}
			else if(j>80)
			{
				j=0;
				op=1;
			}
		}
	}while(y!=13);
	return(op);
}

void choosePlayer(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int P1, PC=0, P2, PM=0, y, a[4]={2,3,4,6}, i, j=0;
	do{
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		cleardevice();
		rectangle(10,getmaxy()/2,getmaxx()/2,10);
		rectangle(getmaxx()/2,getmaxy()-10,getmaxx()-10,getmaxy()/2);
		for(i=0; i<4;i++)
		{
			setfillstyle(SOLID_FILL,a[i]);
			rectangle(getmaxx()/2+20+70*i,getmaxy()-10-60,getmaxx()/2+20+65+70*i,getmaxy()/2+30);
			rectangle(25+70*i,getmaxy()/2-60,90+70*i,40);
			{
				rectangle(15+7*4+70*i+315*j,52+20*4+230*j,25+12*4+70*i+315*j,160+230*j);//SYMBOL
				rectangle(29+7*4+70*i+315*j,52+6*4+230*j,29+12*4+70*i+315*j,52+230*j);//HEAD
				rectangle(29+6*4+70*i+315*j,52+3*4+230*j,29+12*4+70*i+315*j,52+2*4+230*j);//BANDANA1
				floodfill(35+6*4+70*i+315*j,54+2*4+230*j,WHITE);
				floodfill(32+6*4+70*i+315*j,54+2*4+230*j,WHITE);

				rectangle(29+4*4+70*i+315*j,52+3*4+230*j,29+6*4+70*i+315*j,52+4*4+230*j);//BANDANA2
				rectangle(29+5*4+70*i+315*j,52+0*4+230*j,29+6*4+70*i+315*j,52+2*4+230*j);//BANDANA3
				rectangle(29+4*4+70*i+315*j,52-4+230*j,29+5*4+70*i+315*j,52+230*j);//BANDANA4
				rectangle(29+3*4+70*i+315*j,52+3*4+230*j,29+4*4+70*i+315*j,52+2*4+230*j);//BANDANA5
				rectangle(29+1*4+70*i+315*j,52+2*4+230*j,29+3*4+70*i+315*j,52+1*4+230*j);//BANDANA6
				rectangle(29+0*4+70*i+315*j,52+2*4+230*j,29+1*4+70*i+315*j,52+3*4+230*j);//BANDANA7
				rectangle(29+7*4+70*i+315*j,52+7*4+230*j,29+11*4+70*i+315*j,52+6*4+230*j);//NECK
				rectangle(29+4*4+70*i+315*j,52+8*4+230*j,29+14*4+70*i+315*j,52+7*4+230*j);//SHOULDER
				rectangle(29+4*4+70*i+315*j,52+8*4+230*j,29+5*4+70*i+315*j,52+11*4+230*j);//LEFTARM
				rectangle(29+13*4+70*i+315*j,52+8*4+230*j,29+14*4+70*i+315*j,52+11*4+230*j);//RIGHTARM

				rectangle(29+6*4+70*i+315*j,52+8*4+230*j,29+12*4+70*i+315*j,52+12*4+230*j);//TORSO
				rectangle(29+7*4+70*i+315*j,52+12*4+230*j,29+11*4+70*i+315*j,52+13*4+230*j);//HIP
				rectangle(29+7*4+70*i+315*j,52+13*4+230*j,29+8*4+70*i+315*j,52+15*4+230*j);//LEFTLEG
				rectangle(29+11*4+70*i+315*j,52+13*4+230*j,29+10*4+70*i+315*j,52+15*4+230*j);//RIGHTLEG
				rectangle(29+8*4+70*i+315*j,52+15*4+230*j,29+6*4+70*i+315*j,52+16*4+230*j);//LEFTFOOT
				rectangle(29+10*4+70*i+315*j,52+15*4+230*j,29+12*4+70*i+315*j,52+16*4+230*j);//RIGHTFOOT

				//BANDANACOLOR
				floodfill(27+6*4+70*i+315*j,58+2*4+230*j,15);
				floodfill(23+6*4+70*i+315*j,42+2*4+230*j,15);
				floodfill(19+6*4+70*i+315*j,54+2*4+230*j,15);
				floodfill(7+6*4+70*i+315*j,54+2*4+230*j,15);
				floodfill(11+6*4+70*i+315*j,50+2*4+230*j,15);
				floodfill(27+6*4+70*i+315*j,48+2*4+230*j,15);
				floodfill(43+6*4+70*i+315*j,94+2*4+230*j,15);
				setfillstyle(SOLID_FILL,9); //CHARBKG
				floodfill(38+6*4+70*i+315*j,40+2*4+230*j,15);
				setfillstyle(SOLID_FILL,8); //FOOTCOLOR
				floodfill(32+6*4+70*i+315*j,106+2*4+230*j,15);
				floodfill(48+6*4+70*i+315*j,106+2*4+230*j,15);
				setfillstyle(7+i,a[i]); //SYMBOLCOLOR
				floodfill(18+7*4+70*i+315*j,55+20*4+230*j,15);
			}
			setfillstyle(SOLID_FILL,4);
			floodfill(1,1,15);//OUTBKG
		}

		setfillstyle(SOLID_FILL,1); //INSIDEBKG
		floodfill(12,12,15);
		floodfill(329,300,15);
		outtextxy(65,20,"P1: Choose Your Character");
		outtextxy(getmaxx()/2+55,getmaxy()/2+10,"P2: Choose Your Character");

		setcolor(RED);

		if(PC==0)
		{
			rectangle(25+70*PM,getmaxy()/2-60,90+70*PM,40);
			rectangle(24+70*PM,getmaxy()/2-59,91+70*PM,39);
		}
		else if(PC==1)
		{
			rectangle(getmaxx()/2+20+70*PM-1,getmaxy()-10-60,getmaxx()/2+20+65+70*PM+1,getmaxy()/2+30);
			rectangle(getmaxx()/2+20+70*PM,getmaxy()-10-60,getmaxx()/2+20+65+70*PM,getmaxy()/2+30);
		}

		int a[4]={2,3,4,6};
		y=tolower(getch());
		if(y==27)
		{
			int op;
			PC=0, PM=0, j=0;
			op=menu();
			selection(op);
		}
		if(PC==0)
		{
			if(y=='d')
				PM++;
			else if(y=='a')
				PM--;
			else
				PM=PM;
			if(PM<0)
				PM=3;
			else if(PM>3)
				PM=0;
			else
				PM=PM;
			if(y==32)
			{
				setcolor(15);
				outtextxy(10,getmaxy()/2+5,"P1 Enter Your Name:  ");
				gotoxy(22,16);
				gets(player.p1_name);
				flushall();
				player.p1_type=PM;
				j++;
				PC++;
				PM=0;
			}
		}

		else if(PC==1)
		{
			if(y=='l')
				PM++;
			else if(y=='j')
				PM--;
			else
				PM=PM;
			if(PM<0)
				PM=3;
			else if(PM>3)
				PM=0;
			else
				PM=PM;
			if(y==13)
			{
				setcolor(15);
				outtextxy(getmaxx()/2+10,getmaxy()/2-10,"P2 Enter Your Name:  ");
				gotoxy(61,15);
				gets(player.p2_name);
				flushall();
				player.p2_type=PM;
				j=j;
				PC++;
				PM=0;
			}
		}
	}while(PC!=2);
}

void howtoControl(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(RED);
	rectangle(50,100,600,300);
	line(330,100,330,300);
	
	setcolor(GREEN);
	settextstyle(0,0,3);
	outtextxy(230,60,"Controls");

	settextstyle(2,0,6);
	outtextxy(155,105,"PLAYER 1");
	outtextxy(425,105,"PLAYER 2");

	settextstyle(DEFAULT_FONT,0,1);
	outtextxy(85,145,"Directional Keys : W,A,S,D");
	outtextxy(365,145,"Directional Keys : I,J,K,L");
	outtextxy(110,175,"Fire/Select : Space");
	outtextxy(400,175,"Fire/Select : Enter");

	settextstyle(DEFAULT_FONT,0,0);
	setcolor(WHITE);
	getch();
}

void credits(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(RED);
	rectangle(50,100,600,300);
	line(50,225,600,225);
	settextstyle(4,0,1);

	setcolor(GREEN);
	outtextxy(300,105,"Credits");
	
	settextstyle(3,0,1);
	
	outtextxy(100,135,"Swagat Prasad Niroula");
	outtextxy(400,135,"Sujan Acharya");
	outtextxy(100,155,"Suman Shrestha");
	outtextxy(400,155,"Sagar Dahal");
	outtextxy(215,250,"2015 : All Rights Reserved");
	outtextxy(245,270,"St. Xavier's College");
		
	settextstyle(0,0,3);
	outtextxy(190,60,"Age Of Arrows");

	circle(200,262,8);
	settextstyle(DEFAULT_FONT,0,0);
	outtextxy(197,258,"c");
	settextstyle(DEFAULT_FONT,0,0);
	setcolor(WHITE);
	getch();
}

void writeFile(void)
{
	fpt= fopen("scores.dat","ab");
	fwrite(&player,sizeof(player),1,fpt);
	fclose(fpt);
}

void readFile(void)
{
	closegraph();
	/*if((fpt= fopen("scores.dat","rb"))!=grOk)
	{
		printf("\nThe Score File could not be read.\n");
		getch();
		int op;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		op=menu();
		selection(op);
	}
	  */
	  printf("\n\n\t\t\t\t   HIGHSCORE\n\n");
      printf(" ==============================================================================\n");
      printf("     P1                   Score   Status    Status   Score                   P2\n");
      printf(" ==============================================================================\n");
	//char P1S[4],P2S[4];
     fpt= fopen("scores.dat","rb");
	 int X=0,P=0;
	 while((fread(&playerr,sizeof(playerr),1,fpt))>0)
     { 
		gotoxy(6,8+X);
		printf("%s",playerr.p1_name);
		gotoxy(29,8+X);
		printf("%d",playerr.p1_score);
		if(playerr.p1_winstat==1)
		{ 	
			gotoxy(36,8+X);
			printf("WIN");
			gotoxy(47,8+X);
			printf("---");
		}
		else if(playerr.p1_winstat==playerr.p2_winstat)
		{
			gotoxy(36,8+X);
			printf("TIE");
			gotoxy(47,8+X);
			printf("TIE");
		}
		else
		{ 
			gotoxy(36,8+X);
			printf("---"); 
			gotoxy(47,8+X);
			printf("WIN");
		}
		gotoxy(56,8+X);
		printf("%d",playerr.p2_score);
		gotoxy(80-strlen(playerr.p2_name),8+X);
		printf("%s",playerr.p2_name);
		gotoxy(2,8+X);
		printf("%d. \b\b\b",P+1);
		X++;
		P++;
		if(X>16)
		{
			gotoxy(30,25);
			printf("\nPress any key to see more scores..");
			getch();
			clrscr();
			  printf("\n\t\t\t\t   HIGHSCORE\n\n");
      printf(" ==============================================================================\n");
      printf("     P1                   Score   Status    Status   Score                   P2\n");
      printf(" ==============================================================================\n");

			X=0;
		}
	}
	getch();
	fclose(fpt);
	initgraph(&gd,&gm,"C:\\TC\\BGI");
}

void decide(int i)
{
	char win[100];
    int x=(getmaxx()/2), y=(getmaxy()/2);
	cleardevice();
	delay(1000);
	if(i==1)
	{
		sprintf(win,"Player %d - %s is the winner. Congratulations!!!",i,player.p1_name);
		//outtextxy(x-200,y,"Player 1 is the winner. Congratulations!!!");
		player.p1_winstat=1;
		player.p2_winstat=0;		
	}
	else if(i==2)
	{
		sprintf(win,"Player %d - %s is the winner. Congratulations!!!",i,player.p2_name);
		//outtextxy(x-200,y,"Player 2 is the winner. Congratulations!!!");
		player.p1_winstat=0;
		player.p2_winstat=1;
	}
	else if(i==0)
	{
		sprintf(win,"It\'s a draw. Congratulations to you both!!!");
		//outtextxy(x-200,y,"Well, it\'s a draw. So, congratulations to you both!!!");
		player.p1_winstat=0;
		player.p2_winstat=0;
	}
	outtextxy(x-200,y,win);

	delay(1000);
	outtextxy(x-200,y+50,"Press any key to return to the main menu...");
	getch();
	cleardevice();
}

void points(int *p, int i, int j)
{
	if((i>(j-15))&&(i<(j+15)))
	{
		if(i!=j)
			++*p;
		else if(i==j)
			*p+=2;
	}
}
