#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,c,b;
	clrscr();
	while(1)
	{
		printf("\nEnter number of array:");
		scanf("%d",&n);
		if(n>=10)
		{
			printf("\t\t\t\tYour Entered number of array is invalide\n\t\t\t\tAre You Want to leave continue\n\t\t\t\tpresh 1 for Yes :");
			scanf("%d",&c);
			if(c==1)
			continue;
			else
			break;
		}
		for(i=0;i<n;i++)
		{
			printf("Enter [%d] array ",i);
			scanf("%d",&a[i]);
		}
		printf("\t\t\tEnter your choice number :");
		scanf("%d",&b);
		if(b>=n)
		{
			printf("\n\t\t\t\t\t\tYour Entered number is invalide");
		}
		else
		printf("\t\t\t\t\t\t    Your choiced number is %d",a[b]);
	}
	getch();
}