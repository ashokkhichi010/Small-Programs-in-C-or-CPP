#include<stdio.h>
#include<conio.h>

typedef struct nd LINK;

struct nd
{
	int val;
	LINK *p;
};
void main()
{
	LINK *FIRST_INSERT();
	LINK *LAST_INSERT();
	LINK *BEFORE_INSERT();
	LINK *AFTER_INSERT();
	LINK *FIRST_DELET();
	LINK *LAST_DELET();
	LINK *BEFORE_SEARCH();
	LINK *SEARCH_DELET();
	LINK *AFTER_SEARCH();

	LINK *start=NULL,*node,*ptr,*x,*last=NULL,*sd;
	int n,m,s,d,i,val,num,flog=0,exit;
	clrscr();
	while(1)
	{
		printf("\n1=ADD-----2=DELET-----3=PRINT-----4=EXIT-----:");
		scanf("%d",&n);
		switch(n)
		{
//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSE
			case 1:
				printf("<<^>> 1=FIRST <<^>> 2=MID <<^>> 3=LAST <<^>>");
				scanf("%d",&i);
				printf("\t\t\t\t\t\t\tENTER NODE ITEM :");
				scanf("%d",&val);
				node=(LINK *)malloc(sizeof(LINK));
//FIRST-INSERTION------------------------------------------------------------------------------------------------------------------------------------
				if(i==1)
				{
					start=FIRST_INSERT(start,last,node,val);
				}
//MID-INSERTION--------------------------------------------------------------------------------------------------------------------------------------
				else if(i==2)
				{
					printf("SEARCH ELEMENT :");
					scanf("%d",&num);
					ptr=start;
					flog=FIND_VAL(ptr,num);
					if(flog==0)
					{
						printf("--- SEARCHED ELEMENT ISN'T PRESENT IN LINK-LIST ---");
					}
					else if(flog==1)
					{
						printf("----SEARCHING IS SECCESSFULL----");
						printf("<< 1=BEFORE >>-<< 2=AFTER >>");
						scanf("%d",&s);
						ptr=start;
						if(s==1)
							start=BEFORE_INSERT(start,node,ptr,x,val,num);
						else if(s==2)
							start=AFTER_INSERT(start,last,node,ptr,val,num);
						flog=0;
					}
				}
//LAST-INSERTION-------------------------------------------------------------------------------------------------------------------------------------
				else if(i==3)
				{
					start=LAST_INSERT(start,last,node,val);
				}
//---------------------------------------------------------------------------------------------------------------------------------------------------
				else
				{
					printf("YOUR ENTERED INPUT IS INVALID----------------");
				}
				continue;
//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETIO
			case 2:
				printf("<< 1=FIRST >>*<< 2=MID >>*<< 3=LAST >> :");
				scanf("%d",&d);
//FIRST-DELETION-------------------------------------------------------------------------------------------------------------------------------------
				if(d==1)
				{
					start=FIRST_DELET(start,last);
				}
//MID-DELETION---------------------------------------------------------------------------------------------------------------------------------------
				else if(d==2)
				{
					printf("SEARCH ELEMENT :");
					scanf("%d",&num);
					ptr=start;
					flog=FIND_VAL(ptr,num);
					if(flog==0)
					{
						printf("--- SEARCHED ELEMENT ISN'T PRESENT IN LINK-LIST ---");
					}
					else if(flog==1)
					{
						printf("----SEARCHING IS SECCESSFULL----");
						printf("<< 1=BEFORE >>*<< 2=SEARCH >>*<< 3=AFTER >>-:");
						scanf("%d",&d);
						x=ptr=sd=start;
						if(d==1)
							start=BEFORE_SEARCH(start,x,ptr,sd,num);
						else if(d==2)
							start=SEARCH_DELET(start,x,ptr,sd,num);
						else if(d==3)
							start=AFTER_SEARCH(start,x,ptr,sd,last,num);
						flog=0;
					}
				}
//LAST-DELETION--------------------------------------------------------------------------------------------------------------------------------------
				else if(d==3)
				{
					ptr=start;
					start=LAST_DELET(start,last,ptr);
				}
//---------------------------------------------------------------------------------------------------------------------------------------------------
				else
				{
					printf("-----------------YOUR INPUT IS INVELID--------------");
				}
				continue;
//PRINT--LINK-LIST-----------------------------------------------------------------------------------------------------------------------------------
			case 3:
				printf("START");
				ptr=start;
				while(ptr!=NULL)
				{
					printf("-->>%d",ptr->val);
					ptr=ptr->p;
				}
				continue;
//EXITTING-------------------------------------------------------------------------------------------------------------------------------------------
			default:
				goto EXIT;
		}
		EXIT :
			printf("---------DO YOU WANT TO GO TO EXIT PRESS 'y' : ");
			scanf("%s",&exit);
			if(exit=='y')
				break;
			else
				continue;
	}
	printf("EXITTING.....................................................");
	getch();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *FIRST_INSERT(LINK *start,LINK *last,LINK *node,int val)
{
	if(start==NULL)
	{
		last=node;
	}
	node->val=val;
	node->p=start;
	start=node;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *LAST_INSERT(LINK *start,LINK *last,LINK *node,int val)
{
	if(start==NULL)
	{
		last=node;
	}
	else
	{
		last->p=last=node;
	}
	last->val=val;
	last->p=NULL;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *BEFORE_INSERT(LINK *start,LINK *node,LINK *ptr,LINK *x,int val,int num)
{
	if(ptr->val!=num)
	{
		x=start;
		BEFORE_INSERT(start,node,ptr->p,x,val,num);
	}
	if(ptr==start)
	{
		start=node;
	}
	else
	{
		ptr->p=node;
	}
	node->p=ptr;
	node->val=val;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *AFTER_INSERT(LINK *start,LINK *last,LINK *node,LINK *ptr,int val,int num)
{
	if(ptr->val!=num)
	{
		AFTER_INSERT(start,last,node,ptr,val,num);
	}
	if(start==last)
	{
		last=node;
	}
	node->p=ptr->p;
	ptr->p=node;
	node->val=val;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *FIRST_DELET(LINK *start,LINK *last)
{
	if(last==start)
	{
		last=start->p;
	}
	start=start->p;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *LAST_DELET(LINK *start,LINK *last,LINK *ptr)
{
	if(ptr->p!=last)
	{
		LAST_DELET(start,last,ptr->p);
	}
	if(start==last)
	{
		start=last=start->p;
	}
	else
	{
		ptr->p=last->p;
		last=ptr;
	}
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *BEFORE_SEARCH(LINK *start,LINK *x,LINK *ptr,LINK *sd,int num)
{
	if(sd->val!=num)
	{
		x=ptr;
		ptr=sd;
		BEFORE_SEARCH(start,x,ptr,sd->p,num);
	}
	if(sd==start)
	{
		printf("------------NOt PRESENT ANY NODE BEFORE SEARCHED ELEMENT --------------");
	}
	else if(x==ptr)
	{
		start=sd;
	}
	else
	{
		x->p=sd;
	}
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *SEARCH_DELET(LINK *start,LINK *ptr,LINK *sd,LINK *last,int num)
{
	while(sd->val!=num)
	{
		ptr=sd;
		sd=sd->p;
	}
	if(last==sd)
	{
		last=ptr;
	}
	ptr->p=sd->p;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *AFTER_SEARCH(LINK *start,LINK *x,LINK *ptr,LINK *sd,LINK *last,int num)
{
	while(sd->val!=num)
	{
		ptr=sd;
		sd=sd->p;
	}
	if(last==sd)
	{
		printf("NOT PRESENT ANY NODE AFTER SEARCHED ELEMENT \n");
	}
	else if(sd->p==last)
	{
			last=sd;
	}
	x=sd->p;
	sd->p=x->p;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int FIND_VAL(LINK *ptr,int num)
{
	while(ptr!=NULL)
	{
		if(ptr->val==num)
		{
			return 1;
		}
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*while(ptr->val!=num)
{
	ptr=ptr->p;
}
start=ptr;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while(ptr->val!=num)
{
	ptr=ptr->p;
}
last=ptr;
last-p=NULL;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while(sd!=null)
{
	if(sd->val==num)
	{
		if(start==sd)
		{
			start=sd->p;
			sd=ptr=start;
		}
		else if(sd==last)
		{
			last=ptr;
			last->p=NULL;
		}
		else
		{
			ptr->p=sd->p;
			sd=sd->p;
		}
	}
	else
	{
		ptr=sd;
		sd=sd->p;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while(ptr!=NULL)
{
	num=ptr->val;
	x=ptr->p;
	while(x!=NULL)
	{
		if(x->val==num)
		{
			if(start->val==x->val)
			{
				x=x->p;
				ptr=start=x;
			}
			else if(x==last)
			{
				last=y;
				last->NULL;
				x=NULL;
			}
			else
			{
				y->p=x->p;
				x=x->p;
			}
		}
		else
		{
			y=x;
			x=x->p;
		}
	}
	ptr=ptr->p;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
