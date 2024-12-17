#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,*p=&a;
	clrscr();
	printf("\n%d",p);
	printf("\n%u",p);
	printf("\n%d",*p);
	getch();

}