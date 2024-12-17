#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<9;i++)
	{
		if(i==0  ^  i==8)
		{	printf("  IIIIIIIII  ");	}
		else
		{	printf("      I      ");	}
		printf("\n");
	}
	getch();
}