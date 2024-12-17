#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i,j,a,h,m,s,ss;
	initgraph(&gd,&gm,"");
	clrscr();
	for(h=0;h<24;h++)
	{
		for(m=0;m<60;m++)
		{
			for(s=0;s<60;s++)
			{
				for(ss=0;ss<60;ss++)
				{
					cleardevice();
					printf("\n\n\n\t\t\t\t%d : %d : %d : %d",h,m,s,ss);
					delay(12);
				}
				delay(20);
			}
			delay(18);
		}
		delay(18);
	}
	getch();
}