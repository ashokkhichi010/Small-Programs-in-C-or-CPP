#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("***OOOOOOOO***");	}
		else
		{	printf("**O        O**");	}
		printf("\n");
	}
	getch();
}