#include<stdio.h>
#include<conio.h>
int push(int ,int *,int *);
int pop(int *,int *);
void main()
{
	int stack_1[10],stack_2[10],stack_3[10],tos_1=0,tos_2=0,tos_3=0,val,x,y,v;
	char choi;
	clrscr();
	while(1)
	{
		printf("Press 1 for insert ,Press 2 for delet & Press other no. for exit :");
		scanf("%d",&x);
		printf("From which stack - Press 1 for stack_1 & Press 2 for stack_2 :");
		scanf("%d",&y);
		if(x==1 && y>0 &y<4)
		{
			printf("Enter stack_%d[] :",y);
			scanf("%d",&val);
			if(y==1)
			{
				if(push(val,stack_1,&tos_1)==0)
				{
					printf("Your Entered [%d] stcak_1 = %d won't use becouse stack is full\n",tos_1,val);
				}
				else
					continue;
			}
			else if(y==2)
			{
				if(push(val,stack_2,&tos_2)==0)
				{
					printf("Your Entered [%d] stcak_2 = %d won't use becouse stack is full\n",tos_2,val);
				}
				else
					continue;
			}
			else if(y==3)
			{
				if(push(val,stack_3,&tos_3)==0)
				{
					printf("Your Entered [%d] stcak_3 = %d won't use becouse stack is full\n",tos_3,val);
				}
				else
					continue;
			}
		}
		else if(x==2 && y>0 & y<4)
		{
			if(y==1)
			{
				if(pop(stack_1,&tos_1)==0)
				{
					printf("<^^^^^^^^^^^^^^^^^^^^ stack_1 is empity ^^^^^^^^^^^^^^^^^^^^^^^^>");
				}
				else
					printf("Your Entered last [%d] stack_1 is %d and location is %u\n",tos_1,stack_1[tos_1],&stack_1[tos_1]);
					continue;
			}
			else if(y==2)
			{

				if(pop(stack_2,&tos_2)==0)
				{
					printf("<^^^^^^^^^^^^^^^^^^^^ stack_2 is empity ^^^^^^^^^^^^^^^^^^^^^^^^>");
				}
				else
					printf("Your Entered last [%d] stack_2 is %d and location is %u\n",tos_2,stack_2[tos_2],&stack_2[tos_2]);
					continue;
			}
			else if(y==3)
			{
				if(pop(stack_3,&tos_3)==0)
				{
					printf("<^^^^^^^^^^^^^^^^^^^^ stack_3 is empity ^^^^^^^^^^^^^^^^^^^^^^^^>");
				}
				else
					printf("Your Entered last [%d] stack_3 is %d and location is %u\n",tos_3,stack_3[tos_3],&stack_3[tos_3]);
					continue;
			}

		}
		else
		{
			printf("Do you want to leave press 'y' for yes and press other key for live :");
			scanf("%s",&choi);
			if(choi=='y')
			{
				printf("Your are going to exit......................................");
				break;
			}
			else
				continue;
		}
	}
	getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int push(int val,int *stptr,int *toptr)
{
	if(*toptr>=10)
	{
		return 0;
	}
	else
		stptr[*toptr]=val;
		(*toptr)++;
		return 1;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int pop(int *stptr,int *toptr)
{
	if(*toptr<=0)
	{
		return 0;
	}
	else
		(*toptr)--;
		return stptr[*toptr];
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////