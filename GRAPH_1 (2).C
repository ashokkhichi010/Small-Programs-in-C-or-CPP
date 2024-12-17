#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=0;i<240;i++)
	{
		setcolor(i*i);
		circle(320,240,i);
		delay(10);
	      //	cleardevice();
	}
	getch();
	closegraph();
}