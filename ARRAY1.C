#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	long double sum=1;
	clrscr();
	printf("Enter number of array =") ;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter [%d] array :",i);
		scanf("%d",&a[i]);
		sum=sum*a[i];
	}
	printf("multiplication of all arrays is  %Lf",sum);
	getch();

}