#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);
	fun(a);
	fun1(a);
	fun2(a);
	getch();
}
fun(x)
{
	int i,c;
	printf("table of %d=",x);
	for(i=1;i<=10;i++)
	{
		c=x*i ;
		printf("\n\t\t%d",c);
	}

}

fun1(x)
{
	int i,c=1;
	for(i=1;i<=x;i++)
	{
		c=c*i;
	}
	printf("\n\n\nfectorial number of %d digits=%d\n\n\n",x,c);
}

fun2(x)
{

	int a,i,c=0;
	float z;

	for(i=1;i<=x;i++)
	{
		printf("Enter %d no.: ",i);
		scanf("%d",&a);
		c=c+a;
	}
	z=c/x;
	printf("sum=%d\tper=%f",c,z);
}
