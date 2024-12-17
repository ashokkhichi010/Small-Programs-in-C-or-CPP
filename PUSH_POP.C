#include<stdio.h>
#include<conio.h>
int push(int,int *,int *) ;
int pop(int *,int *);
void main()
{
	int stack[10],val,n,v,delet,tos=0,choi;
	clrscr();
	while(1)
	{
		printf("perss 1 for insert and press 2 for delete and press other key for exit :");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter [%d] stack :",tos);
			scanf("%d",&val);

			if(push(val,&tos,stack)==0)
			{
				printf("<Your Entered stack [%d] = %d won't use becouse Your Index is full\n",tos,val);
			}
			continue;
		}
		else if(n==2)
		{
			if(pop(&tos,stack)==0)
			{
				printf("<--------------------------Your Index is empity--------------------------->\n");
			}
			else
			{
				printf("\t\t\tYour Entered last [%d] stack is %d and loction is %u\n",tos,stack[tos],&stack[tos]);
				continue;
			}
		}
		else
		{
			printf("\nDo you want to leave press y for exit and press n for live :");
			scanf("%s",&choi);
			if(choi=='y')
			{
				break;
			}
			else
				continue;
		}
	}
	printf("\nYou are going to exit..............................................");
	getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int push(int val,int *toptr, int *stptr)
{
	if(*toptr>=10)
	{
		return 0;
	}
	else
	{
		stptr[*toptr]=val;
		(*toptr)++;
		return 1;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int pop(int *toptr,int *stptr)
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

/****************************************************************************/
/****************************************************************************
void push(int, int *,int *);
int pop(int *, int *);
void main()
{     	int tos=-1,stack[10],val,v,nn;
	clrscr();

	scanf("%d",&val);
	push(val,stack,&tos);

	v = pop(&tos,stack);
	printf("%d",v);

	scanf("%d",&nn);
}     void push(int val,int *stkptr, int *tos)
{     	(*tos)++;
	stkptr[*tos]=val;
}
int pop(int *tos,int *stkptr)
{
	return stkptr[*tos--];
}**********************************************************************************************
*****************************************************************************************************
*********************************************************************************************************/