#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][2]={1,3,2,4,8,9};
	int *p;
	int i,j;
	clrscr();
	p=a;
	for(i=1;i<=3;i++)

	{
		for(j=1;j<=2;j++)
		{
			printf("\n%d,%u",*p,p);
			p++;
		}
	}
	getch();
}