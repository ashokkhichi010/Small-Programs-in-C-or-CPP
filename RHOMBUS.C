#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("*");
		}
		for(j=i;j>0;j--)
		{
			printf("  ");
		}
		for(j=i;j<5;j++)
		{
			printf("*");
		}
		printf("\n") ;
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("*");
		}
		for(j=i;j<4;j++)
		{
			printf("  ");
		}
		for(j=i;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}