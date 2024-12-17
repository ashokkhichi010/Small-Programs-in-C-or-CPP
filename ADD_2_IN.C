#include<stdio.h>
#include<conio.h>
int fun(int ,int)
void main()
{
	int a,i,n;
	clrscr();
	printf("Enter a & n.:");
	scanf("%d%d",&a,&n);
	i=fun(a,n);
	printf("%d",i) ;
	getch();
}
int fun(int x,int y)
{
	int c;
	c=x+y;
	return c;
}
