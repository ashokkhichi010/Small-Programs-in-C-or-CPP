#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter a & b.:");
	scanf("%d%d",&a,&b);
	fun(a,b);
	getch();
}
fun(a,b)
{
	printf("\nbefore swapping=%d\t%d",a,b);
	swap(&a,&b);
	printf("\nafter  swappimg=%d\t%d",a,b);
}               /*
{
	int a,b;
	clrscr();
	scanf("%d%d",&a,&b);
	printf("\n%d\t%d",a,b);
	swap(&a,&b) ;
	printf("\n%d\t%d",a,b);
	getch();
}                 */
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}