#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0)
		{	printf("  TTTTTTTTTTTTT  ");	}
		else
		{	printf("        T        ");	}
		printf("\n");
	}
	getch();
}