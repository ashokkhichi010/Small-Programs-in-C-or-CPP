#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==7)
		{	printf("   QQQQQQQ   ");	}
		else if(i==6)
		{	printf("  Q     Q Q  ");	}
		else if(i==8)
		{	printf("          Q  ");	}
		else
		{	printf("  Q       Q  ");	}
		printf("\n");
	}
	getch();
}