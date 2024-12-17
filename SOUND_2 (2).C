#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i,j;
	initgraph(&gd,&gm,"");
//	clrscr();
	for(i=0;i<7000;i++)
	{
		printf("  %d",i);
		sound(i);
		delay(10);
	}
	nosound();
	getch();
}