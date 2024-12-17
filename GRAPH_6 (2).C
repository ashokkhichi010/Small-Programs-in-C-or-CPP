#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i,j;
	int dp[22]={320,100,370,200,470,200,420,300,470,400,320,300,170,400,220,300,170,200,270,200,320,100};
	int dp1[12]={120,200,300,50,475,200,402,400,196,400,120,200};
	int dp2[22]={120,200,256,200,300,50,344,200,475,200,367,278,402,400,300,327,196,400,232,279,120,200};
	int dp3[12]={256,200,344,200,367,278,300,327,232,279,256,200};
	clrscr();
	initgraph(&gd,&gm,"");
	setcolor(11);
	setfillstyle(8,27);
	fillellipse(298,242,182,191);
	setfillstyle(7,14);
	fillpoly(6,&dp1);
	setfillstyle(5,12);
	fillpoly(11,&dp2);
	setfillstyle(6,25);
	fillpoly(6,&dp3);
	setcolor(14);
	setfillstyle(1,14);
	fillellipse(300,257,57,57);
	outtextxy(290,10,"HI ASHOK");
	setcolor(10);
	outtextxy(287,25,"WILL-COME");
	setcolor(46);
	setfillstyle(1,0);
	fillellipse(270,240,8,10);
	fillellipse(330,240,8,10);
	setfillstyle(1,7);
	fillellipse(270,245,3,5);
	fillellipse(330,245,3,5);
	setfillstyle(1,3);
	setcolor(0);
	for(i=0;i<6;i++)
	{
		ellipse(300,258,200,340,23,20+i);
	}
	getch();
	closegraph();
}

	  /*
	setbkcolor(7);
	setfillstyle(1,14);
	fillellipse(400,250,100,90);
	setfillstyle(1,23);
	fillellipse(360,230,4,6);
	fillellipse(440,230,4,6);
	setfillstyle(1,3);
	ellipse(360,225,0,360,10,10);
	circle(440,225,10);
	setfillstyle(3,4);
	rectangle(300,500,0,250);
	line(530,250,430,450);
	line(530,250,630,450);
	line(430,450,630,450);
	arc(400,250,200,340,50);
	setcolor(11);
	ellipse(400,250,200,340,51,44);
//	ellipse(403,290,184,358,10,30);
//	setfillstyle(2,14);
//  	fillellipse(400,250,70,100);
	setfillstyle(8,3);
	floodfill(251,201,111);
	setfillstyle(11,4);
//	floodfill(401,251,111);
//        floodfill(80,65,4);
	bar(10,10,200,51);
	bar3d(70,70,200,150,20,1);
	pieslice(250,200,20,450,100);
	fillpoly(5,&dp);
	outtextxy(350,240,"ashok");       */