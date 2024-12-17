#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("**N");
		for(j=i;j>0;j--)
		{	printf("*");	}
		printf("N");
		for(j=i;j<8;j++)
		{	printf("*");	}
		printf("N**");
		printf("\n");
	}
	getch();
}

