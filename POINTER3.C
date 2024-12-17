#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,*p=&a,**q=&p;
	clrscr();
	printf("%u",p);
	printf("%d",*p);
	Printf("%u",q);
	printf("%d",*q);
	getch();
}