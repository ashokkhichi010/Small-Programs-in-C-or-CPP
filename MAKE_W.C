#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("  W");
		for(j=i;j<8;j++)
		{	printf(" ");	}
		printf("W");
		for(j=i*2;j>0;j--)
		{	printf(" ");	}
		printf("W");
		for(j=i;j<8;j++)
		{	printf(" ");	}
		printf("W  ");
		printf("\n");
	}
	getch();
}