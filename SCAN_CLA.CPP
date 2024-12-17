#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int a,b;
	void scan()
	{
		cout<<"Enter first number ";
		cin>>a;
		cout<<"enter second number ";
		cin>>b;

	}
	void print()
	{
		cout<<"\nYour entered first number is  "<<a;
		cout<<"\nYour entered second number is "<<b;
	}
};
void main()
{
	A p;
	clrscr();
	p.scan();
	p.print();
	getch();
}
