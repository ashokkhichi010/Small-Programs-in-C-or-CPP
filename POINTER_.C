#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,*p;
	clrscr();
	p=a;

	for(i=0;i<9;i++)
	{
		printf("\nEnter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];

	for(i=0;i<9;i++)
	{
		printf("\nvalue of a[%d] is %u at address %u",i,*p,p);
		p++;
	}
	getch();
}
