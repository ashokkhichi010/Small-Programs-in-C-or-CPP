#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=0;i<=7;i++)
	{
		printf("#");
	}
	for(i=0;i<3;i++)
	{
		printf("\n#");
		for(j=0;j<6;j++)
		{
			printf(" ");
		}
		printf("#");
	}
	printf("\n");
	for(i=0;i<=7;i++)
	{
		printf("#");
	}

	getch();
}
