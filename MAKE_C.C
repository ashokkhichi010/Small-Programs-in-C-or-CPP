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
			printf("   CCCCC    ");
		}
		else if(i==1 ^ i==7)
		{
			printf("  C      C   ");
		}
		else
		{
			printf("  C          ");
		}
		printf("\n");
	}
	getch();
}