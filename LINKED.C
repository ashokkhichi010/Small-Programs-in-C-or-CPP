#include<stdio.h>
#include<conio.h>

struct ND
{
	int value;
	struct ND *p;
};

typedef struct ND NODE;

void main()
{
	NODE *start=NULL, *last;
	NODE *newndptr, *trvptr;

	int val,findval;

	clrscr();

	//CREATE LINKED LIST
	while(1)
	{
		scanf("%d",&val);

		if(val==0)
			break;

		newndptr = (NODE *) malloc (sizeof(NODE));
		newndptr->value=val;
		newndptr->p=NULL;

		if(start == NULL)
			start = last = newndptr;
		else
		{
			last->p = newndptr;
			last = newndptr;
		}
	}


	// PRINT LINKED LIST
	trvptr = start;

	while(trvptr != NULL)
	{
		printf(" %d---> ",trvptr->value);
		trvptr = trvptr->p;
	}


	//INSERT AFTER
	fflush(stdin);
	printf("\n\n\n\n");
	trvptr = start;
	scanf("%d",&findval);

	while(trvptr && trvptr->value!=findval)
		trvptr = trvptr->p;

	newndptr = (NODE *) malloc (sizeof(NODE));

	scanf("%d",&val);
	newndptr->value=val;
	newndptr->p=trvptr->p;
	trvptr->p=newndptr;


	// PRINT LINKED LIST
	trvptr = start;
	printf("\n\n After \n\n");
	while(trvptr != NULL)
	{
		printf(" %d---> ",trvptr->value);
		trvptr = trvptr->p;
	}

	getch();
}
