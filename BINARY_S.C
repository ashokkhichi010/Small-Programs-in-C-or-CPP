#include<stdio.h>
#include<conio.h>
int search(int ,int ,int,int *);
void main()
{
	int arr[10]={12,23,34,45,56,67,78,89,91,110},i,find=56,left=0,right=9,result;
	clrscr();                                       /*
	printf("Enter array :");
	for(i=0;i<10;i++)
	{
		printf("\t\t\tEnter arr [%d]  :",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\t\t\tEnter search number : ");
	scanf("%d",&find);
								  */

	result=search(find,left,right,arr);

	if(result==-1)
	{
		printf("\t\t\tsearched number is NOT present in array\n");
	}
	else
	{
		printf("location of searched number is : %d ",result) ;
	}
	getch();
}

 int search(int find,int left,int right,int *arr)
 {
	if(right>=left)
	{
		int mid=(left+right)/2;

		if(arr[mid]==find)
		{
			return mid;
		}
		else if(arr[mid]<find)
		{
			left=mid+1;
			search(find,left,right,arr);
		}
		else if(arr[mid]>find)
		{
			right=mid-1;
			search(find,left,right,arr);
		}
	}
	else
		return -1;

 }

