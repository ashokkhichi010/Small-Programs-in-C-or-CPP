#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a;
	clrscr();
	printf("Enter a.:");
	scanf("%d",n);
	a=fun(n);
	printf("%d",a);
	getch();
}
fun(n)
{
	if(n==0)
	return(1);
	else
	return(n*fun(n-1));
}