#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void ashok()
	{
		cout<<"\nThis is first number:"<<a;
		cout<<"\nThis is second number:"<<b;
	}
	void khichi(int x,int y)
	{
		a=x;
		b=y;
	}
};
void main()
{
	A p;
	clrscr();
	p.khichi(12,23);
	p.ashok();
	getch();
}
