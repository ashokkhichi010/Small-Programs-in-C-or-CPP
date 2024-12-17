#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,x,i;
	clrscr();
	printf("Enter x.:");
	scanf("%d",&x);

	fun(a,b,x);
       /*	printf("%d,%d",a,b);
	for(i=0;i<x-2;i++)
	{
		c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
	} */
	getch();
}

fun(a,b,x)
{
	static int i=0 ;
	if(i<x)
	{
		printf("%d\t",a) ;
		i++;
		fun(b,a+b,x);
	}
}