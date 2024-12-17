#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i=0;int j;
clrscr();
while(1)
{
  printf("insert=1\t delet=2\t");
  scanf("%d",&n);
   if(n==1)
   {
    if(i>=10)
    {
    printf("index is full\n");
    continue;
    }
   printf("enetr array=",i);
   scanf("%d",&a[i]);
  i++;
}
else if(n==2)
{
  if(i<=0)
  {
  printf("index is empty\n");
   continue;
  }

  i--;
  printf("deleted number is %d\n",a[0]);
  for(j=0;j<i;j++)
  {
  a[j]=a[j+1];
  printf("after deletion no is %d\n",a[j]);


  }



}
else
{
 break;
}
}
getch();
}