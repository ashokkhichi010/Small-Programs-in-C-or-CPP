#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,c,b;
	clrscr();
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter [%d] array :",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter value of search:");
	scanf("%d",&c);
	i=1;
	while(c!=a[i])
	{
		i++;
	}
	if(i=a[n+1])
	{
		printf("Your Entered location of value is %d\n",i);
		i==0;
	}
	if(i!=0)
	{
		printf("<<<<<<<<<<<<<<<<<<<<<<<< Your Entered number is invalide >>>>>>>>>>>>>>>>>>>>>>>");
	}
	getch();
}