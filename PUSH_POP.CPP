#include<iostream.h>
#include<conio.h>
class A
{
	int i;
    public:
	int PUSH(int *stack,int *frant,int val)
	{
		if((*frant)>9)
		{
			return 0;
		}
		else
		{
			stack[*frant]=val;
			(*frant)++;
		}
		return 1;
	}
	int POP(int *stack,int *rear,int *frant)
	{
		if((*rear)==(*frant))
		{
			return -1;
		}
		else
		{
			(*frant)--;
			return stack[*frant];
		}
	}
	void PRINT(int *stack,int frant)
	{
		cout<<"\nstack";
		for(i=0;i<frant;i++)
		{
			cout<<"-->"<<stack[i];
		}
	}
};

void main()
{
	A obj;
	int stack[10],val,rear=0,frant=0,n,result;
	char exit;
	clrscr();
	while(1)
	{
		cout<<"\n1=PUSH\t2=POP\t3=EXIT :";
		cin>>n;
		switch(n)
		{
			case 1:
			{
				cout<<"\t\t\t\t\tENTER ITEM  :";
				cin>>val;
				result=obj.PUSH(stack,&frant,val);
				if(result==0)
				{
					cout<<"\n-----------------------STACK IS FULL-----------------------";
				}
				obj.PRINT(stack,frant);
				continue;
			}
			case 2:
			{
				result=obj.POP(stack,&rear,&frant);
				if(result==-1)
				{
					cout<<"\n----------------------STACK IS EMPTY------------------------";
				}
				else
				{
					cout<<"\n\t\t\t\t\t\t\tDELETED ITEM IS "<<result;
				}
				obj.PRINT(stack,frant);
				continue;
			}
			default :
			{
				goto EXIT;
			}
		}
		EXIT :
		{
			cout<<"DO YOU WANT TO EXIT PRESS 'y' :";
			cin>>exit;
			if(exit=='y')
				break;
			else
				continue;
		}
	}
	cout<<"EXITTING..........................";
	getch();
}