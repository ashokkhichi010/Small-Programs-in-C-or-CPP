#include<stdio.h>
#include<conio.h>

typedef struct ST_Q_CQ  ST_Q;

struct ST_Q_CQ
{
	int val;
	ST_Q *p;
};

void main()
{
	ST_Q *node,*start_st=NULL,*start_q=NULL,*start_cq=NULL;
	ST_Q *last_st=NULL,*last_q=NULL,*last_cq=NULL,*ptr;
	int n,i,s,val,exit;
	clrscr();

	while(1)
	{

		printf("\n1=INSERTION   2=DELETION   3=PRINT   4=EXIT :");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\n\t1=STACK  2=QUE  3=CIRCULAR-QUE : ");
				scanf("%d",&n);
				printf("\t\t\t\t\t\t\tENTER---LIST-ITEM :");
				scanf("%d",&val);
				node=(ST_Q *)malloc(sizeof(ST_Q));
				if(n==1)
				{
					if(start_st==NULL)
					{ 	start_st=node; 	}
					else
					{	last_st->p=node;   }
					node->p=NULL;
					node->val=val;
					last_st=node;
				}
				else if(n==2)
				{
					if(start_q==NULL)
					{ 	start_q=node; 	}
					else
					{	last_q->p=node;   }
					node->p=NULL;
					node->val=val;
					last_q=node;

				}
				else if(n==3)
				{
					if(start_cq==NULL)
					{ 	start_cq=node; 	}
					else
					{	last_cq->p=node;   }
					node->p=start_cq;
					node->val=val;
					last_cq=node;
				}
				continue;
			case 2:
				printf(" 1=STACK  2=QUE  3=CIRCULAR-QUE : ");
				scanf("%d",&n);
				if(n==1)
				{
					if(start_st==last_st)
					{
						if(start_st==NULL)
						{
							printf("----------------------------------STACK IS EMPTY-------------------------------\n");
							continue;
						}
						start_st=last_st=NULL;
					}
					ptr=start_st;
					while(ptr->p!=last_st)
					{
						ptr=ptr->p;
					}
					last_st=ptr;
					ptr->p=NULL;
					goto PRI_ST;
				}
				else if(n==2)
				{
					if(start_q==last_q)
					{
						if(start_q==NULL)
						{
							printf("-----------------------------------QUE IS EMPTY--------------------------------\n");
							continue;
						}
						start_q=last_q=NULL;
					}
					start_q=start_q->p;
					goto PRI_Q;
				}
				else if(n==3)
				{
					if(start_cq==last_cq)
					{
						if(start_cq==NULL)
						{
							printf("-------------------------------CIRCULAR  QUE IS EMPTY--------------------------\n");
							continue;
						}
						start_cq=last_cq=NULL;
					}
					last_cq->p=start_cq=start_cq->p;
					goto PRI_CQ;
				}
				continue;
			case 3:
				printf(" 1=STACK  2=QUE  3=CIRCULAR-QUE : ");
				scanf("%d",&n);
				if(n==1)
				PRI_ST :
				{
					ptr=start_st;
					printf("\n\ntart_st");
					while(ptr!=NULL)
					{
						printf("-->%d",ptr->val);
						ptr=ptr->p;
					}
					printf("\n\n");
				}
				else if(n==2)
				PRI_Q :
				{
					ptr=start_q;
					printf("\n\nstart_q");
					while(ptr!=NULL)
					{
						printf("-->%d",ptr->val);
						ptr=ptr->p;
					}
					printf("\n\n");
				}
				else if(n==3)
				PRI_CQ :
				{
					ptr=start_cq;
					printf("\n\nstart_cq");
					while(ptr->p!=start_cq)
					{
						printf("-->%d",ptr->val);
						ptr=ptr->p;
					}
					printf("-->%d-->%d......\n",ptr->val,ptr->p->val);
				}
				continue;
			default :
				goto EXIT;
		}
		EXIT :
		{
			printf("\n\nDO YOU WANT TO GO TO EXIT PRESS 'y' >>:");
			scanf("%s",&exit);
			if(exit=='y')
				break;
			else
				continue;
		}
	}
	printf("EXITTING..............................................................");
}

