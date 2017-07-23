void make(int p_xpos, int p_ypos, int pl, int score)
{
	int a[4]={2,3,4,6};
	char d_p[5], d_score[5];
	sprintf(d_p,"%dP",pl);
	outtextxy(p_xpos,20,d_p);
	sprintf(d_score,"%d",score);
	outtextxy(p_xpos,50,d_score);

	rectangle(50,400,600,80);
	if(pl==1)
	{
		setcolor(a[player.p1_type]);
		outtextxy(p_xpos,5,player.p1_name);
		outtextxy(p_xpos,p_ypos,"|\\");
		outtextxy(p_xpos,p_ypos+10,"| }");
		outtextxy(p_xpos,p_ypos+20,"|\/");
	}
	else
	{
		setcolor(a[player.p2_type]);
		outtextxy(p_xpos-(5*(strlen(player.p2_name))),5,player.p2_name);
		outtextxy(p_xpos+3,p_ypos,"\/|");
		outtextxy(p_xpos-5,p_ypos+10,"{ |");
		outtextxy(p_xpos+3,p_ypos+20,"\\|");
	}
	setcolor(WHITE);
}

void rearrow(int p_xpos, int y, int pl, int *p1, int *p2)
{
	static int i_p1=MAXSCORE, i_p2=MAXSCORE;
	int j, k=0;
	for(j=((pl==1)?i_p1:i_p2);j>0;j--)
	{
		outtextxy(p_xpos+k,60," ^ ");
		outtextxy(p_xpos+k,65," | ");
		k=((pl==1)?k+7:k-7);
	}

	if(y==1)
	{
		if(pl==1)
		{
			--i_p1;
		}
		else if(pl==2)
		{
			--i_p2;
		}
	}

	if(i_p1<0||i_p2<0)
	{
		
		player.p1_score=*p1;
		player.p2_score=*p2;
		decide((*p1==*p2)?0:((*p1>*p2)?1:(*p2>*p1)?2:3));
		writeFile();
		i_p1=MAXSCORE;
		i_p2=MAXSCORE;
		*p1=0;
		*p2=0;
		int op;
		op=menu();
		selection(op);
	}
}

void arrow(int p_this_xpos, int p_this_ypos, int s, char p_arrow[], int p_other_xpos, int p_other_ypos, int p1, int p2)
{
	int go;
	for(go=0;go<540;go+=5)
	{
		if(s==1)
		{
			rearrow(p_this_xpos,0,1,&p1,&p2);
			rearrow(p_other_xpos,0,2,&p1,&p2);
			make(p_this_xpos,p_this_ypos,1,p1);
			make(p_other_xpos,p_other_ypos,2,p2);
		}
		else if(s==-1)
		{
			rearrow(p_other_xpos,0,1,&p1,&p2);
			rearrow(p_this_xpos,0,2,&p1,&p2);
			make(p_other_xpos,p_other_ypos,1,p1);
			make(p_this_xpos,p_this_ypos,2,p2);
		}
		outtextxy(p_this_xpos-5+(s*go),p_this_ypos+10,p_arrow);
		delay(3);
		cleardevice();
	}
}

void theGame(void)
{
	cleardevice();
	closegraph();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int p1_score=0, p2_score=0;
	char p1_arrow[5]={'=','-','-','>'};
	char p2_arrow[5]={'<','-','-','='};
	int p1_xpos=52,p1_ypos=88,p2_xpos=580,p2_ypos=88,y;
	do
	{
		cleardevice();
		rectangle(50,400,600,80);
		make(p1_xpos,p1_ypos,1,p1_score);
		make(p2_xpos,p2_ypos,2,p2_score);
		rearrow(p1_xpos,0,1,&p1_score,&p2_score);
		rearrow(p2_xpos,0,2,&p1_score,&p2_score);
		y=tolower(getch());
		if(y==119)
			p1_ypos=p1_ypos-10;
		else if(y==115)
			p1_ypos=p1_ypos+10;
		else if(y==105)
			p2_ypos=p2_ypos-10;
		else if(y==107)
			p2_ypos=p2_ypos+10;
		else
			p1_ypos=p1_ypos;
		if(p1_ypos<=85)
			p1_ypos=p1_ypos+10;
		else if(p1_ypos>=375)
			p1_ypos=p1_ypos-10;
		else
			p1_ypos=p1_ypos;
		if(p2_ypos<=85)
			p2_ypos=p2_ypos+10;
		else if(p2_ypos>=375)
			p2_ypos=p2_ypos-10;
		else
			p2_ypos=p2_ypos;


		if(y==32)
		{
			rearrow(p1_xpos,1,1,&p1_score,&p2_score);
			arrow(p1_xpos,p1_ypos,1,p1_arrow,p2_xpos,p2_ypos,p1_score,p2_score);
			points(&p1_score,p1_ypos,p2_ypos);
		}
		else if(y==13)
		{
			rearrow(p2_xpos,1,2,&p1_score,&p2_score);
			arrow(p2_xpos,p2_ypos,-1,p2_arrow,p1_xpos,p1_ypos,p1_score,p2_score);
			points(&p2_score,p1_ypos,p2_ypos);
		}
	}while(y!=27);
}