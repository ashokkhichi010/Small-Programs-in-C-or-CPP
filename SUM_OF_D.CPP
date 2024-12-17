#include<iostream.h>
#include<conio.h>
void main()
{
	int a,sum=0,r;
	clrscr();
	cout<<"Enter One number"<<" ";
	cin>>a;
	while(a>0)
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	cout<"Sum of Digits is  "<<sum;
	getch();
}