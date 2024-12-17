#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==4)
		{	printf("  HHHHHHHH  ");	}
		else
		{	printf("  H      H  ");	}
		printf("\n");
	}
	getch();
}
