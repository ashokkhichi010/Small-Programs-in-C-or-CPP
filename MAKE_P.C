#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==4)
		{	printf("**PPPPP***");	}
		else if(i>0  &&  i<4)
		{	printf("**P    P**");	}
		else
		{	printf("**P*******");	}
		printf("\n");
	}
	getch();
}