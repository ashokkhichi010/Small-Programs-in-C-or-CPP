#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void assign(int i)
	{
		cout<<"Enter value of ["<<i<<"] a : ";
		cin>>a;
		cout<<"Enter value of ["<<i<<"] b : ";
		cin>>b;
	}
	void show(int i)
	{
		cout<<"\n\t\t\t\tYour Entered ["<<i<<"] a is "<<a;
		cout<<"\n\t\t\t\tYour Entered ["<<i<<"] b is "<<b;
	}
};
void main()
{
	int i,n;
	clrscr();
	A p[10];
	cout<<"Enter number of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	       p[i].assign(i);
	}
	for(i=0;i<n;i++)
	{
		p[i].show(i);
	}
	getch();
}