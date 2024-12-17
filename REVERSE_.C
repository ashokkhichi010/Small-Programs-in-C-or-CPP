#include<stdio.h>
#include<conio.h>
int push(int ,int *,int *);
int pop(int *,int*);
void main()
{
	int stack[10],tos=0,n,val,j;
	char choi;
	clrscr();
	while(1)
	{
		printf("\n\tinsert=1 \t delet=2 \t exit=3 :");
		scanf("%d",&n);
		if(n==1)
		{
			if(tos!=0)
			{
				if(tos<10)
				{
					printf("Before Insertion Your New Stack is :\n");
					for(j=tos;j>0;j--)
					{
						stack[j]=stack[j-1];
					}
					for(j=1;j<=tos;j++)
					{
						printf("%d\t",stack[j]);
					}
				}
			}
			printf("\nEnter [%d] stack :",0);
			scanf("%d",&val);
			if(push(val,stack,&tos)==0)
			{
				printf("Your Entered stack [%d] = %d won't use becouse Your ivdex is full\n",0,val);
			}
			continue;
		}

		else if(n==2)
		{
			if(pop(stack,&tos)==0)
			{
				printf("------------------------------Your index is empity-----------------------------");
			}
			else
			{
				printf("Your deleted stack [%d] number is %d\n",0,stack[0]);
				printf("After deletion New stack is : \n");
				for(j=0;j<tos;j++)
				{
					stack[j]=stack[j+1];
					printf("%d\t",stack[j]);
				}
			}
		}
		else
		{
			printf("Do you want to go to exit press 'y' for yes :");
			scanf("%s",&choi);
			if(choi!='y')
			{
					continue;
			}
			else
			{
				printf("You are going to exit.......................................");
				break;
			}
		}
	}
	getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int push(int val,int *stack ,int *tos)
{
	if(*tos>=10)
	{
		return 0;
	}
	else
	{
		stack[0]=val;
		(*tos)++;
		return 1;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int pop(int *stack,int *tos)
{
	if(*tos<=0)
	{
		return 0;
	}
	else
	{
		(*tos)--;
		return stack[0];
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////