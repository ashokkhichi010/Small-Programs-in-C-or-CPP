#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int a,b,c;
	void add();          /*
	void sum()
	{
		c=a+b;
		cout<<"sum = "<<c;
	}                  */
};
void A::add()
{
	cout<<"Enter a.:"<<" ";
	cin>>a;
	cout<<"Enter b.:"<<" ";
	cin>>b;
	c=a+b;
	cout<<"sum = "<<c;
}
void main()
{
	A p;
	clrscr();
	p.add();     /*
	p.sum();         */
	getch();
}