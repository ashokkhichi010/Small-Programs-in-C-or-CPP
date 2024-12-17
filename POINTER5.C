#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,*p=&a,**q=&p;
	clrscr();
	printf("\n%d",*p);
	printf("\n%u",p);
	printf("\n%d",**q);
	printf("\n%u",q);
	getch();
}