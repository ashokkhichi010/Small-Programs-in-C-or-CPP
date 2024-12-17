#include<stdio.h>
#include<conio.h>
void main()
{
	char *q,*p,a[10],b[10],i=0,c=0;
	clrscr();
	printf("Enter a & b:");
	scanf("%s%s",a,b);
	gets(a);

	p=a;
	q=b;
	while(*p!=NULL)
	{
		if(*q!=*p)
		{
			c=1;
			break;
		}
		p++;
		q++;
	}
	if(c==1)
	{
		printf("not equal");
	}
	else
	{
		printf("equal");
	}
	getch();

}