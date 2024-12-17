// 			          ASHOK KUMAR

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char a[100];
	clrscr();
	printf("ENTER NUMBER OF CHAR : ");
	scanf("%d",&n);
	printf("ENTER YOUR NAME  : ");
	for(i=0;i<=n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c",a[j]);
		}
	}

	for(i=n;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf(" %c",a[j]);
		}
	}
	getch();
}