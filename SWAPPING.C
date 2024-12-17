#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a & b:");
	scanf("%d%d",&a,&b) ;
	printf("\nafter  swapping a & b:=%d %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nbefore swapping a & b:=%d %d",a,b);
	getch();
}