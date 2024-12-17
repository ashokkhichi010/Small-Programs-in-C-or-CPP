#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,n;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("**");
		if(i<5)
		{
			for(j=i;j>0;j--)
			{	printf(" ");	}
			printf("X");
			for(j=i*2;j<7;j++)
			{	printf(" ");	}
			if(i<4)
			{	printf("X");    }
			for(j=i;j>0;j--)
			{	printf(" ");	}
		}
		else
		{
			for(j=i;j<8;j++)
			{	printf(" ");	}
			printf("X");
			for(j=i*2;j>9;j--)
			{	printf(" ");	}
			printf("X");
			for(j=i;j<8;j++)
			{	printf(" ");	}
		}
		printf("**");
		printf("\n");
	}
	getch();
}
