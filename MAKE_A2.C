#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m;
	clrscr();
	for(i=0;i<9;i++)
	{
		for(j=i;j<10;j++)
		{
			printf("*");
		}
		printf("A");

		for(j=i*2;j>1;j--)
		{
			if(i==5)
			{
				printf("A");
			}
			else
				printf("*");
		}
		if(i>0)
		{
			printf("A");
		}
		for(j=i;j<10;j++)
		{
			printf("*");
		}

		printf("*\n");
	}
	getch();
}