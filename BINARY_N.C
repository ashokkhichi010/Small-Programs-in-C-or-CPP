#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	long double a=1;
	clrscr();
	printf("Enter n.:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=a*2;
	}
	printf("%Lf",a);
	getch();
}