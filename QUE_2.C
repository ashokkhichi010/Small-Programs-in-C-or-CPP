#include<stdio.h>
#include<conio.h>
int insert(int ,int *,int *,int *);
int delet(int *,int *,int *);
void main()
{
	int que[10],frnt=-1,v,k,rear=-1,val,n,delVal;
	char choi;
	clrscr();
	while(1)
	{
		printf("insert = 1\tdelete = 2\texit = 3 :");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter que =");
			scanf("%d",&val);
			if(insert(val,que,&rear,&frnt)==0)
			{
				printf("Your Entered que [%d] = %d won't use becouse que's index is full\n",rear+1,val);
				continue;
			}

			printf("\nstart array");
			for(k=0;k<=rear;k++)
			printf("==%d==",que[k]);
			printf("end array\n");

		}
		else if(n==2)
		{
			delVal = delet(que,&rear,&frnt);
			if(delVal==0)
			{
				printf("<<-----------------------------Que's index is empty--------------------------->>\n");
			}
			else
			{
				printf("deleted que is %d \n",delVal);
				continue;
			}
		}
		else
		{
			printf("Do you want to go exit 'y' for yse else :");
			scanf("%s",&choi);
			if(choi=='y')
			{
				break;
			}
			continue;
		}
	}
	printf("\nYou are going to exit.......................");
	getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int insert(int val,int *queptr,int *rear,int *frnt)
{
	if(*rear>=9)
	{
		return 0;
	}
	else
	{
		if(*frnt==-1 && *rear==-1)
		{
			*frnt=0;
		}
		(*rear)++;
		queptr[*rear]=val;
		return 1;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int delet(int *queptr,int *rear,int *frnt)
{
	int j,delVal;
	if(*frnt==-1)
	{
		return 	delVal=0;
	}
	else
	{
		delVal = queptr[*frnt];
		for(j=0;j<*rear;j++)
		{
			queptr[j]=queptr[j+1];
		}
		(*rear)--;

		if(*rear==-1)
		{
			(*frnt)=-1;
		}
		return delVal;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////