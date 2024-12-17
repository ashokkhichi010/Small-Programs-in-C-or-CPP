#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={10,20,30,40,50};
	int *j;
	clrscr();
	j=a+1;
	printf("\n%d",*j);
	getch();
}