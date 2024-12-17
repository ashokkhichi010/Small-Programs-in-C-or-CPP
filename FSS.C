#include<stdio.h>
#include<conio.h>
int  push(int , int *, int *);
int pop(int *, int *);
void main()
{
	int tos=0, stack[10],val,v,n;
	clrscr();

	while(1)
	{
		printf("insert =1 \t delete=2\t");
		scanf("%d",&n);
		if(n==1 )
		{
			printf("enter the array=");
			scanf("%d",&val);
			if(push(val,stack,&tos)==0)
			{
				printf("\n Stack Overflow !");
			}
			continue;
		}

		if(n==2)
		{
			pop(&tos,stack);
			continue;
		}
		else
			break;
	}
	getch();
}
int  push(int val,int *stkptr,int *tos)
{
	if(*tos>=10)
	{
	//	printf("your index is full\n");
		return 0;
	}
	else
	{
		stkptr[*tos]=val;
		(*tos)++;
		return 1;
	}
}
int pop(int *tos, int *stkptr)
{
if(*tos<=0)
{
   printf("your index is empty\n");
  return 0;
}
else
(*tos)--;
  printf("last stack is%d",stkptr[*tos]);
return stkptr[*tos];
}