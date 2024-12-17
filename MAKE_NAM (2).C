#include<stdio.h>
#include<conio.h>

////////////////////////////////////////////////////////////////
void A(int i)
{
	int j;
		for(j=i;j<9;j++)
		{
			printf(" ");
		}
		printf("A");

		for(j=i*2;j>1;j--)
		{
			if(i==5)
			{
				printf("A");
			}
			else
				printf(" ");
		}
		if(i>0)
		{
			printf("A");
		}
		for(j=i;j<9;j++)
		{
			printf(" ");
		}
}

////////////////////////////////////////////////////////////////
void B(int i)
{
	int j;
		if(i==0 ^ i==4 ^ i==8 )
		{
			printf(" BBBBBB  ");
		}
		else
		{
			printf(" B     B ");
		}
}
////////////////////////////////////////////////////////////////
void C(int i)
{
	int j;
		if(i==0 ^ i==8)
		{
			printf("  CCCCC   ");
		}
		else if(i==1 ^ i==7)
		{
			printf(" C     C  ");
		}
		else
		{
			printf(" C        ");
		}
}
////////////////////////////////////////////////////////////////
void D(int i)
{	int j;
		if(i==0 ^ i==8)
		{
			printf("  DDDDDDDDD   ");
		}
		else if(i==1 ^ i==7)
		{
			printf(" D  D      D  ");
		}
		else
		{
			printf("    D      D  ");
		}
}
////////////////////////////////////////////////////////////////
void E(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf(" EEEEEEEE "); 	}
		else if(i==4)
		{	printf(" EEEEE    ");		}
		else
		{	printf(" E        ");		}
}
////////////////////////////////////////////////////////////////
void F(int i)
{	int j;
		if(i==0)
		{	printf(" FFFFFFFF  ");	}
		else if(i==4)
		{	printf(" FFFFF     ");	}
		else
		{	printf(" F         ");	}
}
////////////////////////////////////////////////////////////////
void G(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf("  GGGGGG  ");	}
		else if(i==1   ^  i==6  ^  i==7)
		{	printf(" G      G ");	}
		else if(i==5)
		{	printf(" G    GGG ");	}
		else
		{	printf(" G        ");	}
}
////////////////////////////////////////////////////////////////
void H(int i)
{	int j;
		if(i==4)
		{	printf(" HHHHHHHH ");	}
		else
		{	printf(" H      H ");	}
}
////////////////////////////////////////////////////////////////
void I(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf(" IIIIIIIII ");	}
		else
		{	printf("     I     ");	}
}
////////////////////////////////////////////////////////////////
void J(int i)
{	int j;
		if(i==0)
		{	printf(" JJJJJJJJJJJ ");	}
		else if(i==8)
		{	printf("  JJJJ       ");	}
		else if(i==6  ^  i==7 )
		{	printf(" J    J      ");	}
		else
		{	printf("      J      ");	}
}
////////////////////////////////////////////////////////////////
void K(int i)
{	int j;
		printf(" K");
		for(j=i;j<5;j++)
		{
			printf(" ");
		}
		if(i>5)
		{
			for(j=i;j>3;j--)
			{	printf(" ");	}
		}
		if(i==5)
		{	printf("K ");	}
		printf("K");
		if(i<5)
		{
			for(j=i;j>=0;j--)
			{	printf(" ");	}
		}
		else
		{
			for(j=i;j<9;j++)
			{	printf(" ");	}
		}
}
////////////////////////////////////////////////////////////////
void L(int i)
{	int j;
		if(i==8)
		{	printf(" LLLLLLLL ");	}
		else
		{	printf(" L        ");	}
}
////////////////////////////////////////////////////////////////
void M(int i)
{	int j;
		printf(" M");
		for(j=i;j>0;j--)
		{	printf(" ");	}
		if(i<6)
		{	printf("M");	}
		for(j=i*2;j<9;j++)
		{	printf(" ");	}
		if(i<5)
		{	printf("M");	}
		if(i<6)
		{
			for(j=i;j>0;j--)
			{	printf(" ");	}
		}
		else
		{	for(j=i;j<11;j++)
			{	printf(" ");	}
		}
		printf("M ");
}
////////////////////////////////////////////////////////////////
void N(int i)
{	int j;
		printf(" N");
		for(j=i;j>0;j--)
		{	printf(" ");	}
		printf("N");
		for(j=i;j<8;j++)
		{	printf(" ");	}
		printf("N ");
}
////////////////////////////////////////////////////////////////
void O(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf("  OOOOOOOO  ");	}
		else
		{	printf(" O        O ");	}
}
////////////////////////////////////////////////////////////////
void P(int i)
{	int j;
		if(i==0  ^  i==4)
		{	printf(" PPPPP  ");	}
		else if(i>0  &&  i<4)
		{	printf(" P    P ");	}
		else
		{	printf(" P      ");	}
}
////////////////////////////////////////////////////////////////
void Q(int i)
{	int j;
		if(i==0  ^  i==7)
		{	printf("  QQQQQQQ  ");	}
		else if(i==6)
		{	printf(" Q     Q Q ");	}
		else if(i==8)
		{	printf("        Q  ");	}
		else
		{	printf(" Q       Q ");	}
}
////////////////////////////////////////////////////////////////
void R(int i)
{	int j;
		if(i==0  ^  i==4)
		{	printf(" RRRRR  ");	}
		else if(i>0  && i<4)
		{	printf(" R    R ");	}
		else
		{
			printf(" R");
			for(j=i;j>=5;j--)
			{	printf(" ");	}
			printf("R");
			for(j=i;j<9;j++)
			{	printf(" ");	}
		}
}
////////////////////////////////////////////////////////////////
void S(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf("  SSSSSS  ");	}
		else if(i==1  ^  i==7)
		{	printf(" S      S ");	}
		else if(i==2)
		{	printf(" S        ");	}
		else
		{
			printf("  ");
			for(j=i*2;j>6;j--)
			{	printf(" ");	}
			printf("S");
			for(j=i*2;j<13;j++)
			{	printf(" ");	}
		}
}
////////////////////////////////////////////////////////////////
void T(int i)
{	int j;
		if(i==0)
		{	printf(" TTTTTTTTTTTTT ");	}
		else
		{	printf("       T       ");	}
}
////////////////////////////////////////////////////////////////
void U(int i)
{	int j;
		if(i==8)
		{	printf("  UUUUUUUU  ");	}
		else
		{	printf(" U        U ");	}
}
////////////////////////////////////////////////////////////////
void V(int i)
{	int j;
		for(j=i;j>=0;j--)
		{
			printf(" ") ;
		}
		printf("V");
		for(j=i*2;j<15;j++)
		{
			printf(" ");
		}
		if(i<8)
		{	printf("V");	}
		for(j=i;j>=0;j--)
		{
			printf(" ") ;
		}
}
////////////////////////////////////////////////////////////////
void W(int i)
{	int j;
		printf(" W");
		for(j=i;j<8;j++)
		{	printf(" ");	}
		printf("W");
		for(j=i*2;j>0;j--)
		{	printf(" ");	}
		printf("W");
		for(j=i;j<8;j++)
		{	printf(" ");	}
		printf("W ");
}
////////////////////////////////////////////////////////////////
void X(int i)
{	int j;
		printf(" ");
		if(i<5)
		{
			for(j=i;j>0;j--)
			{	printf(" ");	}
			printf("X");
			for(j=i*2;j<7;j++)
			{	printf(" ");	}
			if(i<4)
			{	printf("X");    }
			for(j=i;j>0;j--)
			{	printf(" ");	}
		}
		else
		{
			for(j=i;j<8;j++)
			{	printf(" ");	}
			printf("X");
			for(j=i*2;j>9;j--)
			{	printf(" ");	}
			printf("X");
			for(j=i;j<8;j++)
			{	printf(" ");	}
		}
		printf(" ");
}

////////////////////////////////////////////////////////////////
void Y(int i)
{	int j;
		if(i>4)
		{	printf("       Y      ");	}
		else
		{
			printf("  ");
			for(j=i;j>0;j--)
			{	printf(" ");}
			printf("Y");
			for(j=i*2;j<9;j++)
			{	printf(" ");	}
			printf("Y");
			for(j=i;j>0;j--)
			{	printf(" ");	}
			printf(" ");
		}
}
////////////////////////////////////////////////////////////////
void Z(int i)
{	int j;
		if(i==0  ^  i==8)
		{	printf(" ZZZZZZZ ");	}
		else
		{
			printf(" ");
			for(j=i;j<7;j++)
			{	printf(" ");	}
			printf("Z");
			for(j=i;j>0;j--)
			{	printf(" ");	}
		}
}
////////////////////////////////////////////////////////////////

void main()
{
	int i,n,j;
	char NAME[10];
	clrscr();
	printf("ENTER TOTAL CHAR OF YOUR NAME :");
	scanf("%d",&n);
	printf("ENTER YOUR NAME : ");
	for(j=0;j<=n;j++)
	{
		scanf("%c",&NAME[j]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<=n;j++)
		{
		    switch(NAME[j])
		    {	case 'a':
				A(i);
				break;
			case 'b':
				B(i);
				break;
			case 'c':
				C(i);
				break;
			case 'd':
				D(i);
				break;
			case 'e':
				E(i);
				break;
			case 'f':
				F(i);
				break;
			case 'g':
				G(i);
				break;
			case 'h':
				H(i);
				break;
			case 'i':
				I(i);
				break;
			case 'j':
				J(i);
				break;
			case 'k':
				K(i);
				break;
			case 'l':
				L(i);
				break;
			case 'm':
				M(i);
				break;
			case 'n':
				N(i);
				break;
			case 'o':
				O(i);
				break;
			case 'p':
				P(i);
				break;
			case 'q':
				Q(i);
				break;
			case 'r':
				R(i);
				break;
			case 's':
				S(i);
				break;
			case 't':
				T(i);
				break;
			case 'u':
				U(i);
				break;
			case 'v':
				V(i);
				break;
			case 'w':
				W(i);
				break;
			case 'x':
				X(i);
				break;
			case 'y':
				Y(i);
				break;
			case 'z':
				Z(i);
				break;
		    }
		}
		printf("\n");
	}
	getch();
}