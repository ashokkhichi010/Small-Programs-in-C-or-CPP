#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int *p,i;
	clrscr();

	for(i=0;i<5;i++)
	{
		p=&a[i];
		printf("\n%d\t%u",*p,p);

	}
	getch();
}