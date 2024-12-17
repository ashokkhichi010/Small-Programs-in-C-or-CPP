#include<stdio.h>
#include<conio.h>
void main()
{
	int val[9][9],r,c,n,i,j,k,l,m,a,b,s,x,y,z,A,B,flog[10];
	clrscr();
	printf("aapke pas kitni value he :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter [ row ] [ column ] :");
		scanf("%d %d",&r,&c);
		printf("Enter Value of [r] [c] :");
		scanf("%d",val[r][c]);
	}
	while(1)
	{
		for(r=1;r<10;r++)
		{
			for(c=1;c<10;c++)
			{
				if(val[r][c]==0)
				{
					for(k=1;k<10;k++)
					{
						a=b=s=0;							for(l=1;l<10;l++)
						{
							if(val[r][l]==k)
							{
								flog[k]=0;
								a=1;
							}
						}
						if(a==0)
						{
							for(l=1;l<10;l++)
							{
								if(val[l][c]==k)
								{
									flog[k]=0;
									b=1;
								}
							}
							if(b==0)
							{
								for(x=1;x<4;x++)
								{
									for(y=1;y<4;y++)
									{
										if(val[x][y]==k)
										{
											flog[k]=0;
											s=1;
										}
									}
								}
							}
						}
						if(a==b==s==0)
						{
							flog[k]=1;
						}
					}
					for(k=1;k<10;k++)
					{
						if(flog[k]==1)
						{
							A++;
							B=k;
						}
					}

					if(A==1)
					{
						val[r][c]=B;
					}
				}
			}
		}
		for(r=1;r<10;r++)
		{
			for(c=1;c<10;c++)
			{
				if(val[r][c]==0)
				{
					EXIT=1;
				}
			}
		}
		if(EXIT==0)
		{
			break;
		}
	}
	printf("Your Sudoku :\n");

	for(r=1;r<10;r++)
	{
		for(c=1;c<10;c++)
		{
			printf("\t%d",val[r][c]);
		}
		printf("\n");
	}
	getch();
}
