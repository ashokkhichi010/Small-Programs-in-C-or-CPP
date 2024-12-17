#include<stdio.h>
#include<conio.h>
struct A
{
	int val;
	struct A *p;
}list1,list2,list3,list4,*stptr;

void main()
{
	clrscr();
	list1.val=11;
	list1.p=&list2;

	list2.val=22;
	list2.p=&list3;

	list3.val=33;
	list3.p=&list4;

	list4.val=44;
	list4.p=NULL;
	stptr=&list1;

	while(stptr!=NULL)
	{
		printf("\n%d\t%u",stptr->val,stptr->p);
		stptr=stptr->p;
	}
	getch();
}
