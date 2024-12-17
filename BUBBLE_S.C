#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={3,7,4,8,1},i;
	clrscr();
	printf("Enter array :\n");
	for(i=0;i<5;i++)
	{
		printf("Enter [%d] arr :",i);
		scanf("%d",&arr[i]);
	}

	bubble(arr);
	printf("NEW array is :");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	getch();
}
 bubble(int *arr)
{
	int x,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}

}