#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("  K");
		for(j=i;j<5;j++)
		{
			printf(" ");
		}
		if(i>5)
		{
			for(j=i;j>3;j--)
			{	printf(" ");	}
		}
		if(i==5)
		{	printf("K ");	}
		printf("K*");
		if(i<5)
		{
			for(j=i;j>=0;j--)
			{	printf("*");	}
		}
		else
		{
			for(j=i;j<9;j++)
			{	printf("*");	}
		}
		printf("\n");
	}
	getch();
}