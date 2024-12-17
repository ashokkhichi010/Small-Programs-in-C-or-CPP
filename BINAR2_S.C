#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10]={11,22,33,44,55,66,77,88,99,110},find=40,left=0,right=9,mid;
	clrscr();
	while(1)
	{
		if(right>=left)
		{
			mid=(left+right)/2;

			if(find==arr[mid])
			{
				printf("loction of searched number is %d ",mid);
				break;
			}
			else if(find>arr[mid])
			{
				left=mid+1;
				continue;
			}
			else
			{
				right=mid-1;
				continue;
			}
		}
		else
			printf("\n\t\tYOUR ENTERED NUMBER IS not PRESENT IN ARRAY");
			break;
	}
	getch();
}