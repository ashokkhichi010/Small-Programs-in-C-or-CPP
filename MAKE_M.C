#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("  M");
		for(j=i;j>0;j--)
		{	printf("*");	}
		if(i<6)
		{	printf("M");	}
		for(j=i*2;j<9;j++)
		{	printf("*");	}
		if(i<5)
		{	printf("M");	}
		if(i<6)
		{
			for(j=i;j>0;j--)
			{	printf("*");	}
		}
		else
		{	for(j=i;j<11;j++)
			{	printf("*");	}
		}
		printf("M**");
		printf("\n");
	}
	getch();
}