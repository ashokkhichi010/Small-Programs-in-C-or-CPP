// insert (first/mid/last) a node in link-list

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct A
{
	int val;
	struct A *p;
};
typedef struct A LINK;

void main()
{
	LINK *node,*mid,*last,*PRINT,*start='\0',*ptr;
	int val,n,m,i,num,exit;
	clrscr();
	while(1)
	{
		printf("\t1=Add a list\t2=print list\t3=Exit\t:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\t\t\t\t1=First\t2=mid\t3=Last\t:");
				scanf("%d",&m);

				printf("\t\t\t\t  \t\tEnter the list item :");
				scanf("%d",&val);

				node=(LINK*)malloc(sizeof(LINK));

				if(m==1)
				{
					if(start==NULL)
					{
						start=last=node;
					}
					else
					{
						node->p=start;
					}
					node->val=val;
					start=node;
				}
				else if(m==2)
				{
					printf("konse node se after ya before me aap ek node insert krna chahte ho uski value btao :");
					scanf("%d",&num);
					printf("insertion\t1=BEFOFR\t2=AFTER\t:");
					scanf("%d",&i);

					mid=start;

					if(i==1)
					{
						while(1)
						{
							if(mid->val!=num)
							{
								ptr=mid;
								mid=mid->p;
								continue;
							}
							else
							{
								ptr->p=node;
								node->p=mid;
								node->val=val;
								break;
							}
						}
					}
					else if(i==2)
					{
						while(1)
						{
							if(mid->val!=num)
							{
								mid=mid->p;
								continue;
							}
							else
							{
								ptr=mid->p;
								mid->p=node;
								node->p=ptr;
								node->val=val;
								if(ptr==NULL)
								{
									last=node;
								}
								break;
							}
						}
					}
				}

				else if(m==3)
				{
					if(start==NULL)
					{
						start=last=node;
					}
					else
					{
						last->p=node;
					}
					node->val=val;
					node->p='\0';
					last=node;
				}
				continue;
			case 2:
				printf("\nstart");
				PRINT=start;
				while(PRINT!=NULL)
				{
					printf("-->%d",PRINT->val);
					PRINT=PRINT->p;
				}
				continue;
			default :
				printf("DO YOU WANT TO GO TO EXIT YES FOR 'y'  :");
				scanf("%s",&exit);
				if(exit=='y')
					goto EXIT;
				else
					continue;
		}
		EXIT:
			break;
	}
	printf("EXITTING............................................................");
	getch();
}



