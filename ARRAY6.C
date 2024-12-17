#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int n,b,i;
	clrscr();
	while(1)
	{
		printf("Enter size of array:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			printf("Enter [%d] array: ",i);
			scanf("%d",&a[i]);
		}
		printf("\n\t\t\t\t\t\t\Enter location of delet array: ");
		scanf("%d",&b);
		for(i=b;i<n;i++)
		{
			a[i]=a[i+1];
		}
		if(b<n&&b>=0)
		{
			printf("New serise :\n");
			for(i=1;i<n;i++)
			{
				printf("\t\t\t\t\tYour Entered [%d] arra is %d\n",i,a[i]);
			}
		}
		else
		{
			printf("<<<<<<<<<<<<<<<<<<<<<<< Your Entered number is invalide >>>>>>>>>>>>>>>>>>>>>>>");
			break;
		}
	}
	getch();
}
