#include<iostream.h>
#include<conio.h>
void main()
{
	int a=1,i,n;
	clrscr();
	cout<<"Enter n.:"<<"";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	cout<<"Fectorial of n Number is  "<<a;
	getch();
}