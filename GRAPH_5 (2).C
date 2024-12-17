#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	int gd=0,gm,j,i,x,y;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\bgi");
	setcolor(5);
   for(i=0;i<350/2;i++)
	{
		rectangle(0+i,100+i,350-i,450-i);
	}
	setcolor(7);
	rectangle(50,50,400,400);
	line(50,50,0,100);
	line(400,50,350,100);
	line(50,400,0,450);
	line(400,400,350,450);

	x=getmaxx();
	y=getmaxy();
	for(j=0;j<50;j++)
	{
		for(i=0;i<100;i++)
		{
			outtextxy(random(x),random(y-85),":");
		}
		delay(200);
		cleardevice();
		line(0,400,700,400);
	}
	getch();
}