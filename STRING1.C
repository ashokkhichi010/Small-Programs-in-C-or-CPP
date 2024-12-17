#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i,n;
	clrscr();
	printf("Enter no. of char");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	printf("your antered name-%s",a);
	getch();

}