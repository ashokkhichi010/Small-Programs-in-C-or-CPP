#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("   SSSSSS   ");	}
		else if(i==1  ^  i==7)
		{	printf("  S      S  ");	}
		else if(i==2)
		{	printf("  S         ");	}
		else
		{
			printf("  ");
			for(j=i*2;j>5;j--)
			{	printf(" ");	}
			printf("S");
			for(j=i*2;j<14;j++)
			{	printf(" ");	}
		}
		printf("\n");
	}
	getch();
}