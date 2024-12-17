#include<iostream.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
class A
{
	int a,b,c;
	double area,s;
	public:
	void put_1(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
	void put_2(int p)
	{
		a=p;
	}
	void Area_1()
	{
		s=(a+b+c)>>1;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"\narea of triangle :"<<area;
	}
	void Area_2()
	{
		area=pi*a*a;
		s=2*pi*a;
		cout<<"\narea of circle :"<<area<<"\npramiters of circle :"<<s;
	}
};
void main()
{
	A obj;
	clrscr();
	obj.put_1(10,15,20);
	obj.Area_1();
	obj.put_2(10);
	obj.Area_2();
	getch();
}