#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==8)
		{	printf("   UUUUUUUU   ");	}
		else
		{	printf("  U        U  ");	}
		printf("\n");
	}
	getch();
}