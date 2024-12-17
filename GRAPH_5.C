#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	int gd=0,gm,j,i,x,y;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\bgi");
/*	x=getmaxx();
	y=getmaxy();
	for(j=0;j<50;j++)
	{
		for(i=0;i<100;i++)
		{
			outtextxy(random(x),random(y-85),":");
		}
		line(0,400,700,400);
		delay(20);
		cleardevice();
	}
*/
	for(i=0;i<620;i++)
	{
		cleardevice();
		line(0,400,700,400);
		circle(20+i,390,10);
		circle(50+i,390,10);
		circle(100+i,390,10);
		circle(130+i,390,10);
		circle(180+i,390,10);
		circle(210+i,390,10);
		circle(260+i,390,10);
		circle(290+i,390,10);
		circle(340+i,390,10);
		circle(370+i,390,10);
		circle(420+i,390,10);
		circle(450+i,390,10);
      //	circle(500+i,390,10);
    //		circle(530+i,390,10);
  //		circle(580+i,390,10);
//		circle(630+i,390,10);
		rectangle(i,350,70+i,380);
		rectangle(80+i,350,150+i,380);
		rectangle(160+i,350,230+i,380);
		rectangle(240+i,350,310+i,380);
		rectangle(320+i,350,390+i,380);
		rectangle(400+i,350,470+i,380);
		rectangle(445+i,335,455+i,350);
  //		rectangle(570+i,350,640+i,380);
//		rectangle(650+i,350,720+i,380);
		delay(10);
	}
	getch();
}