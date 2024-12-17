#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,b;
	clrscr();
	printf("Enter a.:");
	scanf("%d",&a);
	fun(a);
	getch();
}
fun(a)
{
	int c=0,i,b;
	for(i=2;i<a;i++)
	{
		b=a%i;
		if(b==0)
		{
			printf("non prime number");
			c=1;
			break;
		}
	}
	if(c==0
	)
	printf("prime number");
}