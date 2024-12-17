#include<stdio.h>
#include<conio.h>
void color(int i)
{
	if(i<8)
	{	printf("\033[0;43m");	}
	else if(i<=16)
	{	printf("\033[0;47m");
		printf("\033[1;34m");	}
	else
	{	printf("\033[0;42m");	}
}
void ASHOK(i)
{
	color(i);
	if(i==8  ^ i==16)
	{	printf("    O K I A S     ");	}
	else if(i==9  ^  i==15)
	{	printf("  H  *  N  *  H   ");	}
	else if(i==10 ^  i==14)
	{	printf(" S  o * D * o  O  ");	}
	else if(i==11 ^  i==13)
	{	printf("A  *  o I o  *  K ");	}
	else
	{	printf("I N D I A I D N I ");	}
}

void main()
{
	int i,j;
	clrscr();
	for(i=0;i<24;i++)
	{
		color(i);
		for(j=0;j<79;j++)
		{       if(i>7 && i<=16 && j>30 && j<48)
			{
				j=48;
				ASHOK(i);
			}
			else
			{	printf(" ");	}
		}
		printf("\033[0m\n");
	}
	getch();
}
/*

		     */