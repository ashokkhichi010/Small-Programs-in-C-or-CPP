#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i=0;
	clrscr();
	while(1)
	{
		printf("presh 1 for insert AND presh 2 for delet:");
		scanf("%d",&n);
		if(n==1)
		{
			if(i>=10)
			{
				printf("\t\t\t\t\t\tYour index is full\n");
				continue;
			}
			printf("\t\t\t\t\t\tEnter [%d] array:",i);
			scanf("%d",&a[i]);
			i++;
		}
		else if(n==2)
		{
			if(i<=0)
			{
				printf("\t\t\t\t\t\t\tYour index is empity\n");
				continue;
			}
			printf("\t\t\t\t\t\tYour Entered last number is %d\n",a[i-1]);
			i--;
		}
		else
		{
			printf("\t\t\t\t\tYour Enteedr choice number is invalide");
			break;
		}
	}
	getch();
}