#include<stdio.h>
#include<conio.h>
#define MAX 100

int option(int opt,int a[],int *p);
void main()
{
    int a[100],last=0,opt,loop=0,value;
    int *p;
    clrscr();
    p=&last;
    for(;;)
    {
	if(last==MAX)
	    printf("\nArray Space Over.");
	else if (last<MAX)
	    {
		printf("\nEnter your option:\t1.Insert\t2.Delete\t3.Exit :");

		scanf("%d",&opt);
		if(opt==1)
		{       printf("Enter the value to insert for a[%d]:",last);
			scanf("%d",&value);
			scanf("%d",&a[*p]);
			option(1,a,p);
		}
		else if(opt==2)
		{
			if(*p<=0)
			{
				printf("\nArray is Empty");
			}
		    else
			printf("The number %d will be deleted.\n",a[--(*p)]);
			option(2,a,p);
		}


		if(opt==3)
		    break;

	    }
    }

    printf("\nThe Array you created:");
    for(loop=0;loop<last;loop++)
    {
	printf("\t%d",a[loop]);

    }
    getch();
}
int option(int opt,int a[],int *p)
    {
		if(opt==1)
		{
			if(*p==last)
			{
				return 0;
			}
		   else if(*p<last)
		   {
			*p=*p+1;
			return 1;
		   }
		}
		else if(opt==2)
		{
			return(1);
		}
    }


