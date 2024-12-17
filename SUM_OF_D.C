#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("Enter a digite:");
	scanf("%d",&a);

	while(a>0)
	{
		b=a%10;
		c=c+b;
		a=a/10;
	}
	printf("%d",c);
	getch();
}