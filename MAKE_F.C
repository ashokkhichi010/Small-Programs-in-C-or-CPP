#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0)
		{	printf("  FFFFFFFF   ");	}
		else if(i==4)
		{	printf("  FFFFF      ");	}
		else
		{	printf("  F          ");	}
		printf("\n") ;
	}
	getch();
}