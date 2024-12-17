#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,b,c[10],n,j;
	clrscr();
	while(1)
	{
		printf("Enter size of array:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("Enter [%d] array :",i);
			scanf("%d",&a[i]);
		}
		printf("Enter loction of array:");
		scanf("%d",&b);
		i=b;
	c[0]=a[i];
		if(b>=0&&b<n)
		{
			printf("Enter a value in Your choiced location:");
			scanf("%d",&a[b]);
		}
		else
		{
			printf("<<<<<<<<<<<<<<<<<<<< Your Entered number is invalide >>>>>>>>>>>>>>>>>>>>");
			break;
		}           /*
		for(i=b;i<=n;i++)
		{
			c[j]=a[i];
			j++;
		}             */
		for(i=0;i<b;i++)
		{
			printf("\t\t\t\tYour Entered [%d] array is %d\n",i,a[i]);
		}
		printf("\t\t\t\tYour Entered [%d] array is %d\n",b,a[b]);
		printf("\t\t\t\tYour Entered [%d] array is %d\n",b+1,c[0]);
		for(i=b+2;i<=n;i++)
		{
			j==1;
			c[j]=a[i-1];
			printf("\t\t\t\tYour Entered [%d] array is %d\n",i,c[j]);
			j++;
		}
	}
	getch();
}