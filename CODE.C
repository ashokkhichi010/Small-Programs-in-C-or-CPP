#include<stdio.h>
#include<conio.h>
void loop(int *,int,int *,int,int);
void main()
{
	int NAM[128],nam[8],m,i,n=0;
	clrscr();
	printf("ENTER A NUMBER  :  ");
	scanf("%d",&m);
	loop(nam,m,&n,0,0);
	printf("\n");
	for(i=0;i<8;i++)
	{
		printf("%d  ",nam[i]);
	}
	getch();
}
void loop(int *nam ,int m,int *n,int a,int j)
{
	int i,b;
	if(*n <=m)
	{
		nam[a]=j;
		if(a<7)
		{    a++;
			for(i=0;i<2;i++)
			{
				loop(nam,m,n,a,i);
			}
		}
		else {	(*n)++;	}
	}
}