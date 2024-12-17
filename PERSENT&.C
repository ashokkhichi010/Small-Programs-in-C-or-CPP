#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,sum=0;
	float per;
	clrscr();
	printf("Enter a,b,c,d,e:-:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	sum=a+b+c+d+e;

	per=sum*100.0/500;

	printf("sum of number:=%d \n%f % \tdivi :-  ",sum,per);
	if(per>=90.0)
	printf("honest");

	else if(per>=60.0)
	printf("first division");

	else if(per>=45.0)
	printf("sceond division");

	else if(per>=36.0)
	printf("third division");

	else
	printf("fail");

	getch();
}