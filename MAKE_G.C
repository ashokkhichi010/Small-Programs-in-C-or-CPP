#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("   GGGGGG   ");	}
		else if(i==1   ^  i==6  ^  i==7)
		{	printf("  G      G  ");	}
		else if(i==5)
		{	printf("  G    GGG  ");	}
		else
		{	printf("  G         ");	}
		printf("\n");
	}
	getch();
}