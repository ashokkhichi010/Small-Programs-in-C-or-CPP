#	include<stdio.h>
#include<conio.h>
int insert(int ,int *,int *);
int delet(int *,int *);
void main()
{
	int tos=0,que[10],n,val,v,j;
	char choi;
	clrscr();
	while(1)
	{
		printf("\033[1;31mPress 1 for insert ,Press 2 for delet and Press other no. for exit:");
		scanf("%d",&n);
		if(n==1)
		{
			printf("\033[2;31mEnter [%d] stack :",tos);
			scanf("%d",&val);
			if(push(val,&tos,que)==0)
			{
				printf("\033[0;31mYour Entered [%d] = %d isn't used in stack becouse stack is full\n",tos,val);
			}
			continue;
		}
		else if(n==2)
		{
			if(pop(&tos,que)==0)
			{
				printf("\033[0;32m<------------------------------Your Index is empity---------------------------->\n");
			}
			else
			{
				printf("\033[0;33mYour deleted [%d] number is %d and loction \n",0,que[0],&que[0]);
				if(tos!=0)
				{
					printf("\033[0;34mNew Que After deletion:\n");
				}
				for(j=0;j<tos;j++)
				{
					que[j]=que[j+1];
					printf("\033[3;31m%d\t",que[j]);
				}
				printf("\n");
				if(tos==0)
				{
					printf("\033[0;35m<------------------------------Your Index is empity---------------------------->\n");
				}
				continue;
			}
		}
		else
		{
			printf("\033[0;36mDo you want to go exit y for yes and n for not:");
			scanf("%s",&choi);
			if(choi=='y')
			{
				break;
			}
			else
			continue;
		}
	}
	printf("\n\033[0;37mYou are going to exit......................................");
	getch();
}
/****************************************************************************/
int push(int val,int *toptr,int *queptr)
{
	if(*toptr>=10)
	{
		return 0;
	}
	else
	{
		queptr[*toptr]=val;
		(*toptr)++;
		return 1;
	}
}
/****************************************************************************/
int pop(int *toptr,int *queptr)
{
	if(*toptr<=0)
	{
		return 0;
	}
	else
	{
		(*toptr)--;
		return queptr[*toptr];
	}

}
/****************************************************************************/

/****************************************************************************
void main()
{
	int i=0;
	int num,a[10],lv;
	clrscr();
	while(1)
	{
		printf("\nPresh 1 for Incert & Persh 2 for delet & presh other number for Exit: ");
		scanf("%d",&num);
		if(num==1)
		{

			insert(&i,a)  ;
		    /*	if(i>=10)
			{
				full();
				continue;
			}
			lv=insert(i);
			a[i]=lv;
			loc[i]=&a[i];
			i++;
		  continue;
		}
		else if(num==2)
		{
			delet(&i,a);
			if(i<=0)
			{
				empity();
				continue;
			}
			lv=a[i-1];
			p=loc[i-1];
			delet(i,lv,p);
			i--;
			continue;
		}
		else
		{
			exit();
			break;
		}
	}
	getch();
}

int insert(int *i,int *a)
{
	int lv;
	if(*i>=10)
	{
		printf("<---------------------------Your Index is full-------------------------->");
		return 0;
	}
	printf("Enter [%d] array : ",*i);
	scanf("%d",&lv);
	a[*i]=lv;
	(*i)++;
	return 1;
}

int delet(int *i,int *a)
{
	int j;
	if(*i<=0)
	{
		printf("<---------------------------Your Index is empity------------------------->");
		return 0;
	}
	(*i)--;
	printf("\t\t\tYour deleted [%d] array is %d and loction is %u",0,a[0],&a[0]);
	for(j=0;j<(*i);j++)
	{
		a[j]=a[j+1];
		printf("\nAfter deletion [%d] array is %d  and loction is %u",j,a[j],&a[j]);
	}
	return 1;
}


/*
full()
{
	printf("<---------------------------Your Index is full-------------------------->");
}
empity()
{
	printf("<---------------------------Your Index is empity------------------------->");
}
exit()
{
	int choi;
	printf("<<<<<<<<<<<<<<<<<<<<<<<< Your Entered number is invalide >>>>>>>>>>>>>>>>>>>>>>>");
}
       /*	choice();
}
choice()
{
	int choi;
	printf("\t\t\tDo you want to leave in side\n\t\t\tif yes to press 1 and not to other key press:");
	scanf("%d",&choi);
	if(choi==1)
	{
		main();
	}
	else
	{
		printf("\n<------------------------------OK you are going to exit------------------------>");
		getch();
	}
}
/***********************************************************************************************************************************/
