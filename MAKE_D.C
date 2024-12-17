#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0 ^ i==8)
		{
			printf("   DDDDDDDDD    ");
		}
		else if(i==1 ^ i==7)
		{
			printf("  D  D      D   ");
		}
		else
		{
			printf("     D      D   ");
		}
		printf("\n");
	}
	getch();
}