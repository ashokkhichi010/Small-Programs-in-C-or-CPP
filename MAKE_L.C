#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==8)
		{	printf("  LLLLLLLL  ");	}
		else
		{	printf("  L         ");	}
		printf("\n");
	}
	getch();
}