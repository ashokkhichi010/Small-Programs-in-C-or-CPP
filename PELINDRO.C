#include<stdio.h>
#include<conio.h>

void main()
{
	int a,a1,sum=0,sum1=0,n,i,r;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);

	a1=a;

	while(a>0)
	{
		r=a%10;
		sum=sum*10+r;
		sum1=sum1+r;
		a=a/10;
	}
	printf("pelindrom of a=%d\nsum of a digits=%d",sum,sum1);
	if(a1==sum)
	{
		printf("\nThis is pelindrom number");
	}
	else
	{
		printf("\nThis is non pelindrom number");
	}
	getch();
}