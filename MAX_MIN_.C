#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,sc,max=0,min=a[0],sum=0;
	clrscr();
	printf("Enter number of arry:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];  /*
	}
	max=a[0],min=a[0],sc=a[0];
	for(i=0;i<n;i++)
	{       */
		if(a[i]>max)
		max=a[i];

		if(a[i]<min)
		min=a[i];
	}
	printf("max=%d\tmin=%d\tsum=%d",max,min,sum);
	   /*

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		sc=max;
		max=a[i];
	}
	printf("\tsc=%d",sc);
       */	getch();
}