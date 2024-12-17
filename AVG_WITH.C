#include<stdio.h>
#include<conio.h>
void main()
{
	int n ;
	clrscr();
	printf("number of a.:");
	scanf("%d",&n);
	fun(n);
	getch();
}
fun(n)
{
	int sum=0,i,a[10];
	float x;
	for(i=1;i<=n;i++)
	{
		printf("Enter %d a.:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	x=sum/n;
	printf("\nsum=%d\tavg=%f",sum,x);
}