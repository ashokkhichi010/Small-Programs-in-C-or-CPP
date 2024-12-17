#include<iostream.h>
#include<conio.h>
#define pi 3.14
class A
{
	int r;
	float area;
	public:
	void put_val()
	{
		cout<<"Enter a value :";
		cin>>r;
	}
	void show()
	{
		area=pi*r*r;
		cout<<"area ="<<area;
	}
};
void main()
{
	A obj;
	clrscr();
	obj.put_val();
	obj.show();
	getch();
}
