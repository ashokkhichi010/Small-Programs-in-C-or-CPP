#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	clrscr();
	printf("Enter number of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter [%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\t\t\tYour Entered [%d] array is %d",i,a[i]);
	}
	getch();
}