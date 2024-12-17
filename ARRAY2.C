#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,b;
	clrscr();
	printf("Enter number of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\t\t\tEnter choise number: ");
	scanf("%d",&b);
	if(b>n)
	{
		printf("\t\t\t\t\tyour entered number is invalid");
	}
	else
	printf("\t\t\t\t\tyour choised number is %d",a[b]);
	getch();
}