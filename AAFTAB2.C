#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int ch;
	int c;
	clrscr();
	printf("enter a&b");
	scanf("%d%d",&a,&b);
	printf("enter the choice 1=add,2=sub,3=multi");
	scanf("%d",&ch);
	if(ch==1)
	c=a+b;
	else
	if(ch==2)
	c=a-b;
	else
	if(ch==3)
	c=a*b;
	printf("%d",c);
	getch();
}

