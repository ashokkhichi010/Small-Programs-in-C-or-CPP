#include<graphics.h>
#include<stdio.h>
#include<conio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct TREE ST;
struct TREE
{
	int val;
	ST *left,*right;
}*node;
///////////////////////////////////////////////////////////////////////////////////////////////////
ST NEW_NODE(int val)
{
	ST *node;
	node=(ST *)melloc(sizeof(ST));
	node->val=val;
	node->left=NULL;
	node->right=NULL;
	return node;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void PRINT(ST *ptr)
{
	printf("%d",ptr->val);
	if(ptr->left!=NULL)
	{
		PRINT(ptr->left);
	}
	if(ptr->right!=NULL)
	{
		PRINT(ptr->right);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////
WHERE(ST *node,ST *ptr,int num,int add)
{
	if(ptr!=NULL)
	{
		if(ptr->val==num)
		{
			if(add==1 && ptr->left==NULL)
			{
				ptr->left=node;
				return 1;
			}
			else if(add==2 && ptr->right==NULL)
			{
				ptr->right=node;
				return 1;
			}
		}
		else
		{
			WHERE(node,ptr->left,num,add);
			WHERE(node,ptr->right,num,add);
		}
	}
	return 1;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
ST ADD(ST *start,int val,int add,int num)
{
	ST *node=NEW_NODE(val);
	if(start==NULL)
	{
		start=node;
	}
	else
	{
		WHERE(node,start,num,add);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////
/*ST DELET()
{

}*/
///////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	ST *start;
	int val,ch,num,add,del;
	char exit;
	clrscr();
	while(1)
	{
		printf("\n\t1=ADD\t2=DELET\t3=PRINT\t:");
		scanf("%d",&ch);	//ch=choice;
		switch(ch)
		{
			case 1:
				{
					setcolor(1);
					printf("\t\tLEFT == 1\tAND\tRIGHT == 2   :");
					scanf("%d",&add);      //add a node;
					setcolor(2);
					printf("\t\tENTER A ITEM");
					scanf("%d",&val);      //val=item;
/////  WHERE ADD A NODE   /////////////////////////////////////////////////////////////////////////
					setcolor(3);
					printf("\t\t\t\tFROM WHICH ITEM :");
					scanf("%d",&num);		//wh=where
					ADD(start,add,val,num);
				}
			case 2:
				{
					printf("\t\tLEFT == 1\tAND\tRIGHT == 2   :");
					scanf("%d",&del);      //delet a node;
//					DELET(&start,del);
				}
			case 3:
				{

				}
			default :
				{
					printf("DO YOU WANT TO EXIT PRESS 'y'   :");
					scanf("%s",&exit);
					if(exit=='y')
					{      	goto EXIT;          }
					else
					{	continue;	}
				}
		}
	}
	EXIT :
	printf("EXITTING..........................");
	getch();
}