#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<19;i++)
	{
		for(j=i;j<6;j++)
		{
			printf("  ");
		}
		printf("*");

		if(i<6)
		{
			if(i>0)
			{	printf(" ");	}

			for(j=i;j>1;j--)
			{
				printf("  ");
			}
		}
		else if(i>11)
		{
			if(i<18)
			{	printf(" ");	}
			for(j=i;j<17;j++)
			{
				printf("  ");
			}
		}
		else if(i==6)
		{       printf("");	}
		else
		{	printf("           ");	}


		printf("*");

		if(i==0 ^i==6^i==12^i==18)
		{      	printf("************************");	}
		else
		{
			printf("             ");
			if(i>0  &&  i<6)
			{
				for(j=i;j<6;j++)
				{	printf("  ");	}
			}
			else if(i>12  && i<18)
			{       printf("  ");
				for(j=i;j>13;j--)
				{	printf("  ");	}
			}
		}
		printf("*");

		if(i<6)
		{                  printf(" ");
			for(j=i;j>1;j--)
			{
				printf("  ");
			}
		}
		else if(i>12)
		{
			printf(" ");
			for(j=i;j<17;j++)
			{
				printf("  ");
			}
		}
		else if(i>5 && i<12)
		{         printf("           ");	}


		if(i>0 && i<18)
		{	printf("*");	}

		printf("\n");
	}
	getch();
}