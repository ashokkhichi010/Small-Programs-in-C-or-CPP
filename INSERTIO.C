#include<stdio.h>
#include<conio.h>
void insert(int *) ;
void main()
{
	int i,arr[10]={8,4,6,1,9,44,26,32,76,34};
	clrscr();
	insert(arr);
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	getch();
}

void insert(int *arr)
{
	int i,j,key;
	for(i=1;i<10;i++)
	{
		key=arr[i];  //jis element ko compair krna he usko key me dalkr lock kro
		j=i-1;       //
		while(j>=0 && arr[j]>key)  //
		{
			arr[j+1]=arr[j]; //
			j=j-1;
		}
		arr[j+1]=key;
	}
}