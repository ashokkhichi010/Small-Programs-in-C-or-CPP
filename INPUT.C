#include<stdio.h>
#include<conio.h>
void main()
{
	char a,b,c;
	clrscr();
	printf("\nEnter first character:");
	a=getch();

	printf("\nEnter second character:");
	b=getche();

	printf("\nEnter third charactor:");
	c=getchar();

	printf("%c %c %c",a,b,c);
	getch();
}