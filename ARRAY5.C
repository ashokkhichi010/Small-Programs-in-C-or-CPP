#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,b,c=0;
	clrscr();
	fun();
	fun();
	fun();
	getch();
}
fun()
{
	int a[10],i,n,b,c=0;
	printf("\nEnter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter [%d] array : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter a number :");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b!=a[i])
		{
			continue;
		}
		else if(b==a[i])
		{
			printf("\t\t\t\tThe location of Your choiced number is %d\n",i);
			c++;
		}
	}
	if(c==0)
	{
		printf("<<<<<<<<<<<<<<<<<<<<<<< Your Entered number is invalide >>>>>>>>>>>>>>>>>>>>>>>");
	}
}