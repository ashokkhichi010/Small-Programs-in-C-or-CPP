#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,b;
	clrscr();
	printf("Enter number of table:");
	scanf("%d",&a);

	for(i=1;i<=10;i++)
	{
		b=a*i;
		printf("\n%d",b);
	}
	getch();
}