#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i,j;
	clrscr();
	initgraph(&gd,&gm,"");
	/*
	for(i=1;i<100;i++)
	{
		cleardevice();
		for(j=1;j<100;j++)
		{
			delay(1);
			setcolor(i);
			circle(150,100+i,j);
		}
	}*/            setcolor(7);
	setfillstyle(SOLID_FILL,7);
	fillellipse(290,220,20,10);
	fillellipse(350,220,20,10);
	for(i=0;i<5;i++)
	{
	       setcolor(0);
	       circle(290,220,i);
	       circle(350,220,i);
	}
	setcolor(2);
	setfillstyle(SOLID_FILL,14);
	fillellipse(320,240,120,120);
	setcolor(2);
	ellipse(320,240,220,320,80,80);
	getch();
	closegraph();
}