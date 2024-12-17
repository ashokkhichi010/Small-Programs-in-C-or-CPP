#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10],*p,i=0;
	clrscr();
	printf("Enter a.:");
	gets(a);
	p=&a;

	while(*p!=NULL)
	{
		i++;
		p++;
	}
	printf("%d",i);
	getch();
}
/****************************************************************************

void main()
{
	char a[10];
	clrscr();
	printf("Enter a.:");
	gets(a) ;
	fun(a);
	getch();
}

fun(char *a)
{
	int i=0;
	while(*a!=NULL)
	{
		i++;
		a++;
	}
	printf("%d",i);
}
*****************************************************************************/