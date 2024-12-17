#include<stdio.h>
#include<conio.h>
int insert(int ,int *,int *,int *,int *);
int delet(int *,int *,int *,int *);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	int cir_que[10],rear=-1,frnt=-1,val,n,delVal,flog=0;
	char exit;
	clrscr();
	while(1)
	{
		printf("insert = 1\tdelet = 2\texit = 3\t:");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter [%d] value :",rear+1);
			scanf("%d",&val);
			if(insert(val,&rear,&frnt,cir_que,&flog)==0)
			{
				printf("\nindex is full\n");
			}
		}
		else if(n==2)
		{
			delVal=delet(&rear,&frnt,cir_que,&flog);
			if(delVal==0)
			{
				printf("\nindex is empity\n");
			}
			else
			{
				printf("\ndeleted number is [%d] = %d",frnt,delVal);
			}
		}
		else
		{
			printf("Do you want to go to exit 'y' for yes :");
			scanf("%s",&exit);
			if(exit=='y')
			{
				break;
			}
			else
				continue;
		}
	}
	printf("You are going to exit.....................................");
	getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int insert(int val,int *rear,int *frnt,int *cir_que,int *flog)
{
	if(*rear==*frnt && *flog==1)
	{
		return 0;
	}
	else
	{
		(*rear)++;
		cir_que[*rear]=val;

		if(*rear==9)
		{
			(*rear)=-1;
			(*flog)=1;
		}

		return 1;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int delet(int *rear,int *frnt,int *cir_que,int *flog)
{
	int delVal;
	if(*frnt==9)
	{
		(*frnt)=-1;
		(*flog)=0;
	}
	if(*frnt==*rear && *flog==0)
	{
		return delVal=0;
	}
	else
	{
		(*frnt)++;
		delVal=cir_que[*frnt];
		return delVal;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////