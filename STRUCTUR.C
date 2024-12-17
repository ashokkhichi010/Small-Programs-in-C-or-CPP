#include<stdio.h>
#include<conio.h>
void main()
{
	struct a
	{
		char name[10],phone[11];
		int sel;
	} a[2];
	int i;
	clrscr();
	for(i=0;i<2;i++)
	{
		scanf("%s%s%d",&a[i].name,&a[i].phone,&a[i].sel);
	}
	for(i=0;i<2;i++)
	{
		printf("\n%s\t%s\t%d",a[i].name,a[i].phone,a[i].sel);
	}
	getch();
}