#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==4)
		{	printf("**RRRRR***");	}
		else if(i>0  && i<4)
		{	printf("**R    R**");	}
		else
		{
			printf("**R");
			for(j=i;j>=5;j--)
			{	printf(" ");	}
			printf("R");
			for(j=i;j<10;j++)
			{	printf("*");	}
		}
		printf("\n");
	}
	getch();
}