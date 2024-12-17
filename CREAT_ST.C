#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10],roll[10];
	float p;
}a[10];

void main()
{
	struct student a;
	clrscr();
	scanf("%s%s%f",a.name,a.roll,&a.p);
	printf("\nname=%s\troll=%s\tper=%f",a.name,a.roll,a.p);
	fun();
	getch();
}
fun()
{
	struct student a[10];
	int n,i;
	printf("\n\nEnter number of student:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%f",&a[i].name,&a[i].roll,&a[i].p);
	}
	for(i=0;i<n;i++)
	{
		printf("\nname=%s\troll=%s\tper=%f",a[i].name,a[i].roll,a[i].p);
	}
	getch();
}