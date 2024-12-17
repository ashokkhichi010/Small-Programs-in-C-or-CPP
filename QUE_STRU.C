#include<stdio.h>
#include<conio.h>
struct A
{
	int stack[10],frnt,rear;
}B;
typedef struct A Stack;
void main()
{
	int val,ch,EXIT,DelVal;
	B.rear=-1;
	B.frnt=-1;
	clrscr();
	while(1)
	{
		printf("\t1=INSERT\t2=DELETE\t3=EXIT\t: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter stack [%d] :",B.rear+1);
				scanf("%d",&val);
				if(push(val,&B)==0)
				{
					printf("\t\t\t\t\t\t\tstack is full\n");
				}
				continue;

			case 2:
				if(pop(&B,&DelVal)==0)
				{
					printf("\t\t\t\t\t\t\tstack is empty\n");
				}
				else
					printf("\t\t\t\t\t\t\tdeleted val == %d\n",DelVal);
					continue;
			default :
				printf("IF YOU WANT TO EXIT THEN PRESS 'y' \t:");
				scanf("%s",&EXIT) ;
				if(EXIT=='y')
				{
					goto exit;
				}
				else
					continue;
		}
		exit:
			break;
	}
	printf("EXITTING......................................");
	getch();
}

int push(int val,Stack *st)
{
	if(st->rear==9)
	{
		return 0;
	}
	else
	{
		if(st->rear==-1)
		{
			st->frnt=0;
		}
		st->rear++;
		st->stack[st->rear]=val;
		return 1;
	}
}

int pop(Stack *st,int *DelVal)
{
	int i;
	if(st->rear==-1)
	{
		return 0;
	}
	else
	{
		*DelVal=st->stack[st->frnt];
		for(i=0;i<st->rear;i++)
		{
			st->stack[i]=st->stack[i+1];
		}
		st->rear--;
		if(st->rear==-1)
		{
			st->frnt=-1;
		}
		return 1;
	}
}