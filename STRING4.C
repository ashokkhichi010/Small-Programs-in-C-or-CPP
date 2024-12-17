#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int l;
	clrscr();
	printf("enter a name:");
	gets(a);
/*number of a name*/
	l=strlen(a);
	printf("\nlenghth=%d",l);
/*semol letter me chang krna*/
	strlwr(a);
	printf("\n%s",a);
/*cpital letter me chang krna*/
	strupr(a);
	printf("\n%s",a);
	getch();
}