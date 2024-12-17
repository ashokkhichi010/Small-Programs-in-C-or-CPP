#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
    int a[100],last=0,start=0,loop,i=0,ch;
    char opt;

    for(;;)
    {

        if(last==MAX)
        {

            printf("Array overflow");
            break;
        }
        else if (last<MAX)
        {

            printf("\nEnter your choice:\t1. Insert\t2. Delete\t3.Exit  :");
            scanf("%d",&ch);

            if(ch==1)
            {
                printf("Enter the value at a[%d]:",last);
                scanf("%d",&a[last]);
                last++;
            }
            else if (ch==2)
            {
                if(last==0)
                {
                    printf("Array is empty\n");
                    continue;
                }
                printf("The element %d will be deleted.\n",a[start]);
                for(loop=0;loop<MAX;loop++)
                {
                    a[loop]=a[loop+1];
                }
                last--;

            }
            else if(ch==3)
            {
                break;
            }

            else
            {
                printf("\nINVALID CHOICE :(");
            }
        }
    }
    printf("\nThe array you entered :");
    for(i=0;i<last;i++)
    {
        printf("\t%d",a[i]);
    }

    getch();
}
