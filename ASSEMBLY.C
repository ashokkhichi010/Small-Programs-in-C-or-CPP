#include<stdio.h>
#include<conio.h>
int chare(char);
void loop(char,int*,int*);
void main()
{
	int NAME[128],name[8],j,k,total_char;
	char NAM[100],aa;
	clrscr();
	printf("ENTER NAME OF CHAR   :");
	scanf("%d",&total_char);
	printf("ENTER YOUR NAME  :");
	for(j=0;j<=total_char;j++)
	{
		scanf("%c",&NAM[j]);
	}
	for(k=0;k<=total_char;k++)
	{
		aa=NAM[k];
		loop(aa,name,NAME);
	}
	getch();
}

void loop(char aa,int *name,int *NAME)
{
	int a,b,c,d,e,f,g,h,i,j,k,m=0,n;
	n=chare(aa);
	for(a=0;a<1;a++)
	{     name[0]=a;
		for(b=0;b<2;b++)
		{   name[1]=b;
			for(c=0;c<2;c++)
			{    name[2]=c;
				for(d=0;d<2;d++)
				{     name[3]=d;
					for(e=0;e<2;e++)
					{      name[4]=e;
						for(f=0;f<2;f++)
						{      name[5]=f;
							for(g=0;g<2;g++)
							{      name[6]=g;
								for(h=0;h<2;h++)
								{      name[7]=h;
									if(m==n)
									{
										for(i=0;i<8;i++)
										{
											NAME[m]=name[i];
											printf("%d  ",NAME[m]);
										}
										printf(" --->>  %c   %d\n",aa,m);
									}
									m++;
								}
							}
						}
					}
				}
			}
		}
	}
}


int chare(char aa)
{
	int i,n;
		switch(aa)
		{
			case '\0':
				n=0;
				break;
			case '^A':
				n=1;
				break;
			case '^B':
				n=2;
				break;
			case '^C':
				n=3;
				break;
			case '^D':
				n=4;
				break;
			case '^E':
				n=5;
				break;
			case '^F':
				n=6;
				break;
			case '^G':
				n=7;
				break;
			case '^H':
				n=8;
				break;
			case '^I':
				n=9;
				break;
			case '^J':
				n=10;
				break;
			case '^K':
				n=11;
				break;
			case '^L':
				n=12;
				break;
			case '^M':
				n=13;
				break;
			case '^N':
				n=14;
				break;
			case '^O':
				n=15;
				break;
			case '^P':
				n=16;
				break;
			case '^Q':
				n=17;
				break;
			case '^R':
				n=18;
				break;
			case '^S':
				n=19;
				break;
			case '^T':
				n=20;
				break;
			case '^U':
				n=21;
				break;
			case '^V':
				n=22;
				break;
			case '^W':
				n=23;
				break;
			case '^X':
				n=24;
				break;
			case '^Y':
				n=25;
				break;
			case '^Z':
				n=26;
				break;
			case '^[':
				n=27;
				break;
///			case '^\':
   //				n=28;
     //				break;
			case '^]':
				n=29;
				break;
			case '^^':
				n=30;
				break;
			case '^-':
				n=31;
				break;
			case ' ':
				n=32;
				break;
			case '!':
				n=33;
				break;
			case '"':
				n=34;
				break;
			case '#':
				n=35;
				break;
			case '$':
				n=36;
				break;
			case '%':
				n=37;
				break;
			case '&':
				n=38;
				break;
///			case ''':
   //				n=39;
     //				break;
			case '(':
				n=40;
				break;
			case ')':
				n=41;
				break;
			case '*':
				n=42;
				break;
			case '+':
				n=43;
				break;
			case ',':
				n=44;
				break;
			case '-':
				n=45;
				break;
			case '.':
				n=46;
				break;
			case '/':
				n=47;
				break;
			case '0':
				n=48;
				break;
			case '1':
				n=49;
				break;
			case '2':
				n=50;
				break;
			case '3':
				n=51;
				break;
			case '4':
				n=52;
				break;
			case '5':
				n=53;
				break;
			case '6':
				n=54;
				break;
			case '7':
				n=55;
				break;
			case '8':
				n=56;
				break;
			case '9':
				n=57;
				break;
			case ':':
				n=58;
				break;
			case ';':
				n=59;
				break;
			case '<':
				n=60;
				break;
			case '=':
				n=61;
				break;
			case '>':
				n=62;
				break;
			case '?':
				n=63;
				break;
			case '@':
				n=64;
				break;
			case 'A':
				n=65;
				break;
			case 'B':
				n=66;
				break;
			case 'C':
				n=67;
				break;
			case 'D':
				n=68;
				break;
			case 'E':
				n=69;
				break;
			case 'F':
				n=70;
				break;
			case 'G':
				n=71;
				break;
			case 'H':
				n=72;
				break;
			case 'I':
				n=73;
				break;
			case 'J':
				n=74;
				break;
			case 'K':
				n=75;
				break;
			case 'L':
				n=76;
				break;
			case 'M':
				n=77;
				break;
			case 'N':
				n=78;
				break;
			case 'O':
				n=79;
				break;
			case 'P':
				n=80;
				break;
			case 'Q':
				n=81;
				break;
			case 'R':
				n=82;
				break;
			case 'S':
				n=83;
				break;
			case 'T':
				n=84;
				break;
			case 'U':
				n=85;
				break;
			case 'V':
				n=86;
				break;
			case 'W':
				n=87;
				break;
			case 'X':
				n=88;
				break;
			case 'Y':
				n=89;
				break;
			case 'Z':
				n=90;
				break;
			case '[':
				n=91;
				break;
//			case '/':
  //				n=92;
    //				break;
			case ']':
				n=93;
				break;
			case '^':
				n=94;
				break;
//			case '-':
  //				n=95;
    //				break;
//			case ' ':
  //				n=96;
    //				break;
			case 'a':
				n=97;
				break;
			case 'b':
				n=98;
				break;
			case 'c':
				n=99;
				break;
			case 'd':
				n=100;
				break;
			case 'e':
				n=101;
				break;
			case 'f':
				n=102;
				break;
			case 'g':
				n=103;
				break;
			case 'h':
				n=104;
				break;
			case 'i':
				n=105;
				break;
			case 'j':
				n=106;
				break;
			case 'k':
				n=107;
				break;
			case 'l':
				n=108;
				break;
			case 'm':
				n=109;
				break;
			case 'n':
				n=110;
				break;
			case 'o':
				n=111;
				break;
			case 'p':
				n=112;
				break;
			case 'q':
				n=113;
				break;
			case 'r':
				n=114;
				break;
			case 's':
				n=115;
				break;
			case 't':
				n=116;
				break;
			case 'u':
				n=117;
				break;
			case 'v':
				n=118;
				break;
			case 'w':
				n=119;
				break;
			case 'x':
				n=120;
				break;
			case 'y':
				n=121;
				break;
			case 'z':
				n=122;
				break;
			case '{':
				n=123;
				break;
			case '|':
				n=124;
				break;
			case '}':
				n=125;
				break;
			case '~':
				n=126;
				break;
		}
		return n;
}