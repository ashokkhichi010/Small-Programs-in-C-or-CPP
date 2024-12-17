#include<stdio.h>
#include<conio.h>
int puch(int ,int *,int *,int *);
int pop(int *,int *,int *,int *);
void main()
{
	int stack[3][3],i=-1,j=-1,val,ch,DelVal,exit;
	clrscr();
	while(1)
	{
		printf("\t1=insert\t2=delet\t\tdefault for exit\t:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(i==2 && j==2)
				{
					printf("\t\t\t\t\t\tstack is full\n");
				}
				else
				{
					if(i==-1 && j==-1)
					{
						i++;
					}
					if(j==2 & i<2)
					{
						j=-1;
						i++;
					}
					j++;
					printf("Enter stack [%d][%d]: ",i,j);
					scanf("%d",&stack[i][j]);
				}
				continue;

			case 2:

				if(i==0 && j==-1)
				{
					printf("\t\t\t\t\t\tstack is empty\n");
				}
				else
				{
					if(j==-1 && i>0)
					{
						j=2;
						i--;
					}
					printf("your deleted stack[%d][%d] is %d",i,j,stack[i][j]);
					j--;
				}
				continue;

			default :

				printf("IF YOU WANT TO EXTIT THEN PRESS 'y'\t:");
				scanf("%s",&exit);
				if(exit=='y')
				{
					goto EXIT;
				}
				else
					continue;
		}
		EXIT:
			break;
	}
	printf("EXITTING.............................................");
	getch();
}
				    /*
int push(int val,int *stptr,int *i,int *j)
{
	if((*i)==2 && (*j)==2)
	{
		return 0;
	}
	else
	{
		if((*i)==(*j)==-1)
		{
			(*i)=(*j)=0;
		}
		if((*j)==2 && (*i)<2)
		{
			(*i)++;
			(*j)=-1;
		}
		(*j)++;
		stptr[*i][*j]=val;
		return 1;
	}
}

int pop(int *DelVal,int *stptr,int *i,int *j)
{
	if(*i==*j==-1)
	{
		return 0;
	}
	else
	{
		if(*j==0 && *i>0)
		{
			(*i)--;
			(*j)=2;
		}
		*DelVal=stptr[*i][*j];
		(*j)--;
		if(*i==*j==0)
		{
			(*i)=(*j)=-1;
		}
		return 1;
	}
} */