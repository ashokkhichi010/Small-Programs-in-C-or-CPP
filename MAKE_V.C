#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=0;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf(" ") ;
		}
		printf("V ");
		for(k=i;k>1;k--)
		{
			if(i>1)
			{
				printf("  ");
			}
		}
		if(i>0)
		{
			printf("V");
		}
		for(j=i;j<=5;j++)
		{
			printf(" ") ;
		}
		printf("\n")     ;
	}
	getch();
}