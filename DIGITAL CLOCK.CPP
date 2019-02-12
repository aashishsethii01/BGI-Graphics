#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#pragma warn -rvl

int stopwatch(){

int s1=0,m1=0,h1=0;

while(!kbhit())
{
     cleardevice();
     char sec1[2],min1[2],hr1[2];
     sprintf(sec1,"%d",s1);
     sprintf(min1,"%d",m1);
     sprintf(hr1,"%d",h1);
     settextstyle(2,HORIZ_DIR,7);
     outtextxy(200,200,hr1);
     outtextxy(210,200,":");
     outtextxy(220,200,min1);
     outtextxy(230,200,":");
     outtextxy(240,200,sec1);



	if(s1!=59)
	{
	s1++;
	}

	else if(s1==59)
	{
	   s1=0;
		if(s1==0)
		{
		  m1++;

		    if(m1==59)
		    {
		     m1=0;

		      if(m1==0)
		      {
			h1++;
		      }

		    }

		}

}
	settextstyle(2,HORIZ_DIR,7);
	outtextxy(200,250,"PRESS ANY KEY TO EXIT");
       //	blink();
     delay(1000);


}
}

int display(){
	while(!kbhit())
	{       char r;
		cleardevice();
		struct time t;
		gettime(&t);
		int h=(int)t.ti_hour;
		int m=(int)t.ti_min;
		int s=(int)t.ti_sec;
		char hr[10],min[10],sec[10];
		sprintf(hr,"%d",h);
		sprintf(min,"%d",m);
		sprintf(sec,"%d",s);
		settextstyle(5,HORIZ_DIR,5);
		outtextxy(220,190,hr);
		outtextxy(280,190,":");
		outtextxy(300,190,min);
		settextstyle(5,HORIZ_DIR,1);
		outtextxy(350,190,sec);
	 //	blink();
		settextstyle(2,HORIZ_DIR,7);
		outtextxy(200,250,"PRESS ANY KEY TO EXIT");
		delay(1000);


	}

}

int main(){
int a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
f:
cleardevice();
settextstyle(2,HORIZ_DIR,7);

outtextxy(100,50,"DIGITAL CLOCK");
settextstyle(2,HORIZ_DIR,7);
outtextxy(100,100,"1. View Time");
outtextxy(100,130,"2. Stopwatch");
outtextxy(100,160,"3. Exit");
cin>>a;
switch(a){
case 1: display();
	goto f;
case 2: stopwatch();
       goto f;
case 3: exit(0);
	}
getch();
}
