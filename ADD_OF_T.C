#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],i,j,k,c,d[5][5],r,c1,c2,r1,r2;
	clrscr();
	printf("\nEnter Number of Rows & Columns of First Metrix=");
	scanf("%d%d",&r1,&c1);

	printf("Enter Number of First Metrix=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter [%d][%d] number:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter Number of Rows & Columns of Second Metrix=");
	scanf("%d%d",&r2,&c2);

	printf("Enter Number of Second Metrix=\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter [%d][%d] number:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	printf("Your Enterd First Metrix=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}

	printf("Your Enterd Second Metrix=\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n\n");
	}
	while(1)
	{
		printf("\npress 1 for add ,2 for subs ,3 for mult and other no. for exit:");
		scanf("%d",&r);
		if(r==1)
		{
			if(r1==r2&&c1==c2)
			{
				printf("Addition of First And Second Metrix=\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						c=a[i][j]+b[i][j];
						printf("\t%d",c);
					}
					printf("\n\n");
				}
			}
			else
			{
				printf("Not Possibale to Addition");
				continue;
			}
		}

		else
		if(r==2)
		{
			if(r1==r2&&c1==c2)
			{
				printf("Subscription of First And Second Metrix=\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						c=a[i][j]-b[i][j];
						printf("\t%d",c);
					}
					printf("\n\n");
				}

			}
			else
			{
				printf("Not Possibale to subscription");
				continue;
			}
		}
		else
		if(r==3)
		{
			if(c1==r2)
			{
				printf("multiplication of First And Second Metrix=\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
					{
						d[i][j]=0;
						for(k=0;k<r2;k++)
						{
							d[i][j]+=a[i][k]*b[k][j];

						}
					}
				}
				printf("\n\n");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
					{
						printf("\t%d",d[i][j]);
					}
					printf("\n\n");
				}
			}
			else
			{
				printf("Not Possibale to Multipilication");
				continue;
			}
		}
		else
		break;
	}
	getch();
}