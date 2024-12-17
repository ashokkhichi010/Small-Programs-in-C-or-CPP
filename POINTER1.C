#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3]={3,2,4};
	int *p;
	clrscr();
	p=a;
	printf("%d,%u",*p,p);
	p++;
	printf("%d,%u",*p,p);
	p++;
	printf("%d,%u",*p,p);
	getch();
}