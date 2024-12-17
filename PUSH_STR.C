#include<stdio.h>
#include<conio.h>

struct A
{
	int stack[10];
	int tos;
};

typedef struct A Stack;

void main()
{
	Stack B;
	int ch,val,num;
	char EXIT;
	clrscr();
	B.tos=-1;
	while(1)
	{
		printf("\t1=Insert\t2=Delete\t3=Exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter Stack[%d] : ",B.tos+1);
				scanf("%d",&val);
				if(push(val,&B)==0)
				{
					printf("\t\t\tSTACK IS FULL\n");
				}

				continue;
			case 2:
				if(pop(&B, &num)==0)
				{
					printf("\t\t\tSTACK IS EMPTY\n");
				}
				else
				{
					printf("%d is popped",num);
					//printf("%d",B.stack[B.tos+1]);
				}
				continue;
			default:

				printf("\n<<<<<<<<<---------IF YOU WONT TO EXIT THEN PRESS 'y'\t: ")      ;
				scanf("%s",&EXIT);
				if(EXIT=='y')
				{
					goto exit;
				}
				else
					continue;
		}
		exit:
			break;
	}
	printf("Exitting........................");
	getch();
}

int push(int val,Stack *st)
{

	if(st->tos>=9)
	{
		return 0;
	}
	else
	{
		st->tos++;
		st->stack[st->tos]=val;
		return 1;
	}
}

int pop(Stack *st,int *p)
{
	int a;
	if(st->tos==-1)
	{
		return 0;
	}
	else
		*p=st->stack[st->tos];
		st->tos--;
		return 1;

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*struct A

{
	int a;
	char b;
};
void main()
{
	struct A Z;
	clrscr();
	Z.a=1;
	Z.b='a';
	printf("%d,%c",Z.a,Z.b);
	getch();


}  */
    /*
void main()
{

	int m1=40;
	int m2=50;

	typedef int mark;
	mark m3=70;
	mark m4=40;
	clrscr();
	printf("%d\t%d\t%d\t%d",m1,m2,m3,m4);
	getch();

} */