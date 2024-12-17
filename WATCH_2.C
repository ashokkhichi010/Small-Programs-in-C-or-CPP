#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=0,gm,i,j,hh=90,mm=90,ss=90,s,m,h;
	initgraph(&gd,&gm,"");
	clrscr();
	for(h=0;h<360;h++)
	{
		mm=90;
		for(m=0;m<360;m++)
		{    	ss=90;
			for(s=0;s<360;s++)
			{
				cleardevice();
				outtextxy(313,157,"12");
				outtextxy(317,318,"6");
				outtextxy(237,237,"9");
				outtextxy(397,237,"3");
				outtextxy(241,200,"10");
				outtextxy(387,198,"2");
				outtextxy(271,170,"11");
				outtextxy(358,168,"1");
				outtextxy(358,306,"5");
				outtextxy(275,305,"7");
				outtextxy(246,274,"8");
				outtextxy(386,278,"4");
				circle(320,240,90);    	//watch circle
				circle(320,240,70);    	//watch circle
				if(h==90){	hh=72;	}
				if(m==90){	mm=72;	}
				if(s==90){	ss=72;	}
//				setfillstyle(1,1);
				sector(320,240,ss+1-s,ss-s,65,65);
  //				setfillstyle(1,2);
				sector(320,240,mm+1-m,mm-m,45,45);
    //				setfillstyle(1,3);
				sector(320,240,hh+1-h,hh-h,30,30);
				delay(140);
			}
			delay(60);
		}
		delay(24);
	}
	getch();
}

/*


//
			delay(10);
			for(m=0;m<360;m++)
			{
				if(m==90){	a=72;	}
				setfillstyle(1,2);
				sector(320,240,a+1-m,a-m,50,50);
				for(s=0;s<360;s++)
				{
					if(s==90){	a=72;	}
					setfillstyle(1,1);
					sector(320,240,a+1-s,a-s,73,73);
					delay(165);
				}
				delay(165);
			} */
