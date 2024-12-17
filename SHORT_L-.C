#include<stdio.h>
#include<conio.h>

typedef struct short_link_list SLL;

struct short_link_list
{
	int val;
	SLL *p;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
SLL *print(SLL *ptr)
{
	if(ptr!=NULL)
	{
		printf("-->%d",ptr->val);
		print(ptr->p);
	}
	return 0;
}
SLL *Short(SLL *start,SLL *trevptr,SLL *prevptr,SLL *ptr,SLL **last)
{
	int flog=0;
	SLL *x;
	if(ptr!=NULL)
	{
		if(prevptr->val>ptr->val)
		{
			if(start==prevptr)
			{
				start=ptr;
			}
			else
			{
				trevptr->p=ptr;
			}
			if(*last==ptr)
			{
				*last=prevptr;
			}
			prevptr->p=ptr->p;
			ptr->p=prevptr;
			x=prevptr;
			prevptr=ptr;
			ptr=x;
			flog=1;
		}
		Short(start,prevptr,ptr,ptr->p,last);
	}
	if(flog==1)
	{
		flog=0;
		Short(start,start,start,start->p,last);
	}
	return  start;
}

SLL *add(SLL *start,int val,SLL **last)
{
	SLL *node=(SLL *)malloc(sizeof(SLL));
	if(start==*last==NULL)
	{
		*last=node;
	}
	node->p=start;
	node->val=val;
	start=node;
	start=Short(start,start,start,start->p,last);
	return start;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	SLL *start='\0',*last='\0',*prevptr,*ptr;
	int val,n,m,exit;
	clrscr();
	while(1)
	{
		printf("\n1=ADD	       2=EXIT\t:");
		scanf("%d",&n);
		if(n==1)
		{
			printf("\t\t\t\t\tENTER ITEM :");
			scanf("%d",&val);
			start=add(start,val,&last);
			printf("\nstart");
			print(start);
		}
		else
		{
			printf("DO U WANT TO GO TO EXIT  PRESS 'y':");
			scanf("%s",&exit);
			if(exit=='y')
				break;
			else
				continue;
		}
	}
	printf("EXITTING.............................................");
	getch();
}
