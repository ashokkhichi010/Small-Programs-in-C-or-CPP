#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	int b=1;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%d",b);
	getch();
}
