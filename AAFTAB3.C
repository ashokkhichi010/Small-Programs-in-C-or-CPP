#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n=1;
	clrscr();
	printf("enter a factorial no.=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	n=n*i;
	}
	printf("%d",n);
	getch();
}