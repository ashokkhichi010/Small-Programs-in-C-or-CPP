#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void assign(int p,int q)
	{
		a=p;
		b=q;
	}
	void show()
	{
		cout<<"\n\t\t\t\tYour Entered value of a is : "<<a;
		cout<<"\n\t\t\t\tYour Entered value of b is : "<<b;
	}
};
void main()
{
	A p;
	int x,y;
	clrscr();
	cout<<"Enter value of a:";
	cin>>x;
	cout<<"Enter value of b:";
	cin>>y;
	p.assign(x,y);
	p.show();
	getch();
}