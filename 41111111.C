#include<stdio.h>
#include<conio.h>
#define MAX 100
int option(int ,int ,int *,int *);
void main()
{
    int a[100],last=0,opt,loop=0;
    int pushval,result;
    int *p;
    p=&pushval;
    clrscr();

    for(;;)
    {
	if(last==MAX)
	    printf("\nArray Space Over.");
	else if (last<MAX)
	    {
		printf("\nEnter your option:\t1.Insert\t2.Delete\t3.Exit :");
		scanf("%d",&opt);

		if(opt==1)
		{
			printf("Enter the value a[%d]:",last);
			scanf("%d",&pushval);
			option(1,pushval,a,&last);
		}

		else if(opt==2)
		{
		    if(last<=0)
			printf("\nArray is Empty");
		    else
		    {
			result = option(opt,0,a,&last);
			printf("%d will be deleted.\n",a[result]);
		    }
		}
		else if(opt==3)
		{
		    break;
		}
	    }
    }

    printf("\nThe Array you created:");
    for(loop=0;loop<last;loop++)
    {
	printf("\t%d",a[loop]);

    }
    getch();
}


int option(int opt,int pvalue,int a[],int *p)
    {
		if(opt==1)
		{

		    a[*p]=pvalue;
		    *p=*p+1;

		}
		else if(opt==2)
		{
			*p=*p-1;
			return *p;

		}
    }


