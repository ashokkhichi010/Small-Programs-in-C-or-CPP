#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0)
		{	printf("  JJJJJJJJJJJ  ");	}
		else if(i==8)
		{	printf("   JJJJ        ");	}
		else if(i==6  ^  i==7 )
		{	printf("  J    J       ");	}
		else
		{	printf("       J       ");	}
		printf("\n");
	}
	getch();
}