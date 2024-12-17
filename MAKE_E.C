#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("  EEEEEEEE  "); 	}
		else if(i==4)
		{	printf("  EEEEE     ");		}
		else
		{	printf("  E         ");		}
		printf("\n");
	}
	getch();
}