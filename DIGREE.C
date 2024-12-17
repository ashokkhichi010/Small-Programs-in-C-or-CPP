#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b,x,y;
	clrscr();
	printf("Enter number of digree:=");
	scanf("%d",&a);

	b=a*3.14/180.0;

	printf("\t\t\t\t\tredium=%f",b);

	printf("\n\nEnter number of redium:=");
	scanf("%f",&y);

	x=y*180.0/3.14;
	printf("\t\t\t\t\tdigree =%f",x);
	getch();
}
