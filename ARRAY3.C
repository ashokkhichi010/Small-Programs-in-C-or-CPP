#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10][10];
	int i,j,k,p,q,r;
	clrscr();
	printf("enter p,q,r=");
	scanf("%d%d%d",&p,&q,&r);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<r;k++)
			{
				printf("Enter [%d] [%d] [%d]: ",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("3D table=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==1)
			{printf("\t");
			if(j>0)
			{printf("\t");}}
			if(i==2)
			{printf("\t\t\t");
			if(j>0)
			{printf("\t");}}
			for(k=0;k<3;k++)
			{
				printf("\t%d",a[i][j][k]);
			}
			printf("\n");

		}
		printf("\n\t") ;
	}
	getch();


}