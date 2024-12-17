#include<stdio.h>
#include<conio.h>
void main()
{
      fun();
      fun();
      fun();
      fun();
      fun();
      fun();
      fun();
      fun();
}
fun()
{
	int a;
	printf("\nnumber of day: ");
	scanf("%d",&a);
	switch(a)
	{
		case(1):printf("sunday");
		break;
		case(2):printf("monday");
		break;
		case(3):printf("tuesday");
		break;
		case(4):printf("wednesday");
		break;
		case(5):printf("thursday");
		break;
		case(6):printf("friday");
		break;
		case(7):printf("saterday");
		break;
		default:printf("worng") ;

	}
	getch();
}