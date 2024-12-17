#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("Enter one char.:");
	scanf("%s",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	printf("wovel")  ;
	else
	printf("non wovel");
	getch();
}