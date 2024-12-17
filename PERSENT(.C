#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float x;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&a);
	printf("Enter number of persent(%):");
	scanf("%d",&b);

	x=a*b/100.0;
	printf("%f",x);
	getch();
}