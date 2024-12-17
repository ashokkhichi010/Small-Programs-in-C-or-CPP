#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i>4)
		{	printf("*******Y*******");	}
		else
		{
			printf("**");
			for(j=i;j>0;j--)
			{	printf("*");}
			printf("Y");
			for(j=i*2;j<9;j++)
			{	printf("*");	}
			printf("Y");
			for(j=i;j>0;j--)
			{	printf("*");	}
			printf("**");
		}
		printf("\n");
	}
	getch();
}