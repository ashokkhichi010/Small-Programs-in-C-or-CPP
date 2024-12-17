	#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(j=0;j<400;j++)
	{
		for(i=0;i<21;i++)
		{
			setcolor(i);
			rectangle(40+i,400+i,170-i,420-i);
			rectangle(20+i,420+i,190-i,440-i);
			rectangle(0+i,440+i,210-i,460-i);

			setcolor(i);
			line(100+i/2,10,100+i/2,400);

			setcolor(6);
			rectangle(110+i,10+i,310-i,50-i);
			setcolor(15);
			rectangle(110+i,50+i,310-i,90-i);
			setcolor(18);
			rectangle(110+i,90+i,310-i,130-i);
		}
		delay(1000);
		setcolor(25);
		circle(210,70,20);
		line(210,50,210,90);
		line(190,70,230,70);
		line(197,56,224,84);
		line(197,84,224,56);
		line(203,52,218,88);
		line(203,88,218,52);
		line(193,63,228,78);
		line(192,78,228,63);
	}
	getch();
}