//-INSERTION---AND---DELETION---WITH---DUPLICAT---DELETION---IN---LINK-LIST---------------------------------------------------------------------------------------------

#include<stdio.h>
#include<conio.h>

typedef struct nd LINK;

struct nd
{
	int val;
	LINK *p;
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *MAKE_NODE(int val)
{
	LINK *node=(LINK *)malloc(sizeof(LINK));
	node->val=val;
	node->p=NULL;
	return node;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *INS_FIRST(LINK *start,LINK **last,int val)
{
	LINK *node=MAKE_NODE(val);
	if(start==NULL)
	{
		(*last)=node;
	}
		node->p=start;
	start=node;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *INS_LAST(LINK *start,LINK **last,int val)
{
	LINK *node=MAKE_NODE(val);
	if(start==NULL)
	{
		start=(*last)=node;
	}
	else
	{
		(*last)->p=node;
	}
	(*last)=node;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *BEFORE_SEARCH(LINK *start,LINK *prev_ptr,LINK *ptr,int val)
{
	LINK *node=MAKE_NODE(val);
	if(start==ptr)
	{
		start=node;
	}
	else
	{
		prev_ptr->p=node;
	}
	node->p=ptr;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *AFTER_SEARCH(LINK *start,LINK *ptr,LINK **last,int val)
{
	LINK *node=MAKE_NODE(val);
	if(ptr==(*last))
	{
		(*last)=node;
	}
	else
	{
		node->p=ptr->p;
	}
	ptr->p=node;
	return start;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PRINT(LINK *ptr)
{
	printf("\n\nSTART");
	while(ptr!=NULL)
	{
		printf("-->%d",ptr->val);
		ptr=ptr->p;
	}
	printf("\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *FIND_ELE(LINK **x,LINK **prev_ptr,LINK *ptr,int num)
{
	while(ptr!=NULL)
	{
		if(ptr->val==num)
		{
			return ptr;
		}
		(*x)=*prev_ptr;
		(*prev_ptr)=ptr;
		ptr=ptr->p;
	}
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DELET_FIRST(LINK *start)
{
	start=start->p;
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DEL_BEFO_SEARCH(LINK *start,LINK *x,LINK *ptr,int dd)
{
   //ONE-NODE--DELET--BEFORE--SEARCH-ELEMENT------------------------------------------------------------------------------------------------------------
	if(dd==1)        //dd=1 ka mean one element delet
	{
		if(start->p==ptr)
			start=ptr;
		else
			x->p=ptr;
	}
   //ALL-NODE--DELET--BEFORE--SEARCH-ELEMENT------------------------------------------------------------------------------------------------------------
	else if(dd==2) //dd=2 ka mean all element delet
	{
		start=ptr;
	}
	return start;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DEL_LAST(LINK *prev_ptr,LINK *last)     //last delet
{
	if(prev_ptr==last)
	{
		last=NULL;
	}
	else
	{
		last=prev_ptr;
		last->p=NULL;
	}
	return last;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DEL_AFTER_SEARCH(LINK *start,LINK *ptr,LINK **last,int dd)
{
    //ONE-NODE--DELET--AFTER--SEARCH-ELEMENT---------------------------------------------------------------------------------------------------------
	if(dd==1)
	{
		if(ptr->p==(*last))
		{
			(*last)=ptr;
		}
		ptr->p=ptr->p->p;
	}
    //ALL-NODE--DELET--AFTER--SEARCH-ELEMENT------------------------------------------------------------------------------------------------------------
	else if(dd==2)
	{
		(*last)=ptr;
		(*last)->p=NULL;
	}
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DEL_SEARCH(LINK *start,LINK **last,LINK *prev_ptr,int num,int dd)
{
	LINK *x=prev_ptr=start;
	LINK *ptr=FIND_ELE(&x,&prev_ptr,start,num);
	if(start==ptr)
	{
		prev_ptr=start=start->p;
	}
	else if(ptr==(*last))
	{
		(*last)=prev_ptr;
		prev_ptr->p=NULL;
	}
	else
	{	prev_ptr->p=ptr->p;	}

	if(ptr==0)
	{
		return start;
	}
	if(dd==2)
		{	DEL_SEARCH(start,last,prev_ptr,num,dd); }
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
LINK *DUPLICAT_DEL(LINK *start,LINK *prev_ptr,LINK *ptr,LINK **last,int dd)
{
	LINK *x;
	if(ptr!=NULL)
	{
		x=FIND_ELE(&prev_ptr,&prev_ptr,ptr->p,ptr->val);
		if(dd==1 && x==0)
		{
			start=DEL_SEARCH(start,last,start,ptr->val,dd);
		}
		else if(dd==2 && x!=0)
		{
			start=DEL_SEARCH(start,last,start,ptr->val,dd);
		}
		DUPLICAT_DEL(start,ptr->p,ptr->p,last,dd);
	}
	return start;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	LINK *node,*start='\0',*ptr,*prev_ptr,*last=NULL,*ld,*md,*x;
	int dd,i,s,m,n,d,val,num,exit;
	clrscr();

	while(1)
	{
		printf("\n1=ADD    2=DELET    3=PRINT    4=EXIT :");
		scanf("%d",&n);

//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSERTION//INSE
		if(n==1)
		{
			printf("\n\t\t\t\t1=FIRST    2=MID   3=LAST :");
			scanf("%d",&i);
			printf("\t\t\t\t\t\t\t\tEnter item :");
			scanf("%d",&val);
//FIRST-INSERTION------------------------------------------------------------------------------------------------------------------------------------
			if(i==1)
			{
				start=INS_FIRST(start,&last,val);
			}
//MID-INSERTION--------------------------------------------------------------------------------------------------------------------------------------
			else if(i==2)
			{
				if(start==NULL)
				{
					printf("LINK-LIST IS EMPTY THAT'S WHY INSERTION ISN'T POSSIABALE\n");
					continue;
				}
				printf("ENTER SEARCH NUMBER :");
				scanf("%d",&num);
//FIND--ELEMENT--------------------------------------------------------------------------------------------------------------------------------------
				ptr=FIND_ELE(&x,&prev_ptr,start,num);
//---------------------------------------------------------------------------------------------------------------------------------------------------
				if(ptr==0)
				{
					printf(" \n----------------NOT FIND ANY ELEMENT IN LINK-LISK ------------------\n");
				}
				else
				{
					printf("-------------------------------SEARCHING--IS--SUCCESSFUL------------------------\n");
					printf("---------------YOUR--ITEM--IS--INSERT--ONLY--FIRST--FINDED--ELEMENT-------------\n\t\t\t1=BEFORE\t2=AFTER :");
					scanf("%d",&m);
//BEFORE-INSERTION-----------------------------------------------------------------------------------------------------------------------------------
					if(m==1)
					{
						start=BEFORE_SEARCH(start,prev_ptr,ptr,val);
					}
//AFTER-INSERTION------------------------------------------------------------------------------------------------------------------------------------
					else if(m==2)
					{
						start=AFTER_SEARCH(start,ptr,&last,val);
					}
				}
			}
//LAST-INSERTION-------------------------------------------------------------------------------------------------------------------------------------
			else if(i==3)
			{
				start=INS_LAST(start,&last,val);
			}
			PRINT(start);
			continue;
		}
//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION//DELETION
		else if(n==2)
		{
			if(start==NULL)
			{
				printf("NO NODE AVAILABLE IN LINK-LIST\n");
				continue;
			}
			printf("\t\t\t1=FIRST\t2=MID\t3=LAST\t4=ALL DUPLICATE\t5=NON DUPLICAT\t:");
			scanf("%d",&d);
//FIRST-DELETION-------------------------------------------------------------------------------------------------------------------------------------
			if(d==1)
			{
				start=DELET_FIRST(start);
			}
//MID-DELETION---------------------------------------------------------------------------------------------------------------------------------------
			else if(d==2)
			{
				printf("ENTER SEARCH NUMBER :");
				scanf("%d",&num);
				ptr=FIND_ELE(&x,&prev_ptr,start,num);
				if(ptr==0)
				{
					printf(" \n----- YOUR  SEARCHED  NUMBER  ISN'T  AVAILABLE  IN  LINK-LIST \n");
					continue;
				}
				printf("\n------------------SEARCHING--IS--SUCCESSFUL----------------------\n");
				printf("\t\t    1=BEFORE SEARCH       2=SEARCH      3=AFTER SEARCH   : ");
				scanf("%d",&s);
//BEFORE-SEARCH--DELETION----------------------------------------------------------------------------------------------------------------------------
				if(s==1)
				{
					if(ptr==start)
					{
						printf("\nSEARCH NUMBER SE BEFORE KOI BHI NODE NHI HE \n");
						continue;
					}
					printf("  \t \t \t 1= ONE DELET        2=ALL DELET    :");
					scanf("%d",&dd); //dd=duplicat delet
					start=DEL_BEFO_SEARCH(start,x,ptr,dd);
				}
//SEARCH--DELETION-----------------------------------------------------------------------------------------------------------------------------------
				else if(s==2)
				{
					printf("  \t \t \t 1= ONE DELET        2=ALL DELET    :");
					scanf("%d",&dd);
					prev_ptr=start;
					start=DEL_SEARCH(start,&last,prev_ptr,num,dd);
				}
//AFTER-SEARCH--DELETION-----------------------------------------------------------------------------------------------------------------------------
				else if(s==3)
				{
					ptr=FIND_ELE(&x,&prev_ptr,start,num);
					if(ptr==last)
					{
						printf("\nSEARCH NUMBER SE AFTER KOI BHI NUMBER NHI HE \n");
						continue;
					}
					printf("\n \t \t \t 1= ONE DELET        2=ALL DELET    :");
					scanf("%d",&dd);
					start=DEL_AFTER_SEARCH(start,ptr,&last,dd);
				}
			}
//LAST--DELETION-------------------------------------------------------------------------------------------------------------------------------------
			else if(d==3)
			{
				prev_ptr=start;
				ptr=FIND_ELE(&x,&prev_ptr,start,last->val);
				last=DEL_LAST(prev_ptr,last);
			}
//ALL--DUPLICAT--ELEMENET--DELET---------------------------------------------------------------------------------------------------------------------
			else if(d==4)
			{
				start=DUPLICAT_DEL(start,start,start,&last,2);
			}
			else if(d==5)
			{
				start=DUPLICAT_DEL(start,start,start,&last,1);
			}
			PRINT(start);
			continue;
		}
		else if(n==3)
		{	PRINT(start);
			continue;
		}
		else
		{
			printf("DO YOU WANT TO GO TO EXIT PRESS 'y' :");
			scanf("%s",&exit) ;
			if(exit=='y')
				goto EXIT;
			else
				continue;
		}
		EXIT :
			break;
	 }
	 printf("EXITTING..............................................");
	 getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
