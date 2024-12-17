#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("  ZZZZZZZ  ");	}
		else
		{
			printf("  ");
			for(j=i;j<7;j++)
			{	printf(" ");	}
			printf("Z");
			for(j=i;j>=0;j--)
			{	printf(" ");	}
		}
		printf("\n");
	}
	getch();
}