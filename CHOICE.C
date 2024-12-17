#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ch;
	clrscr();
	printf("Enter a & b:=");
	scanf("%d %d",&a,&b);

	printf("Enter choice;- 1=add,2=sub,3=mult:");
	scanf("%d",&ch);

	if(ch==1)		c=a+b;
	else if(ch==2)		c=a-b;
	else if(ch==3)          c=a*b;

	printf("%d",c);
	getch();
}