#include<iostream.h>
#include<conio.h>

void Assign(int Default1,int Default2=30)
{
	Default1=Default1+Default2;
	cout<<"\ndefault1:"<<Default1<<"\ndefault2:"<<Default2;
}

void main()
{
       int present=20,past=40;
       clrscr();
	Assign(present,past);
	Assign(past);
       getch();
}