#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int *p[3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p[i]=&a[i][j];
			printf("\n%d\t%u",*p[i],p[i]);
		}
	}
	getch();
}