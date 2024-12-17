#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a&b=");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\naddition=%d",c);
	c=a-b;
	printf("\nsubstrsaction=%d",c);
	c=a*b;
	printf("\nmultiplication=%d",c);
	getch();
}