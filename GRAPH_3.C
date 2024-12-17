#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i;
	clrscr();
	initgraph(&gd,&gm,"");
	for(i=0;i<220;i++)
	{
		rectangle(220-i,220-i,300+i,100+i);
	}
	for(i=1;i<10;i++)
	{
		delay(100);
		setcolor(4);
		line(10+i*50,10,60+i*50,150);
		line(60,10,10,150);
		line(60,10,460,10);
		line(110,150,510,150);
		line(110,150,110,300);
		rectangle(10,150,510,300);
		circle(60,55,7);
		rectangle(230,180,380,270);
		line(260,180,260,270);
		line(290,180,290,270);
		line(320,180,320,270);
		line(350,180,350,270);
		line(230,210,380,210);
		line(230,240,380,240);
		line(60,150,60,300);

		rectangle(40,150,80,300);
	}

	getch();
}