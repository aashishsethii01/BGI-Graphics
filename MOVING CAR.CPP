#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

class Car
{
public:
void design();
};

void Car::design()
{
int x=getmaxx();
label:
while(!kbhit()){

	for(int i=1;i<=x;i++)
	{
		cleardevice();
		line(0,258,x,258);// platform

		line(50+i,200,150+i,200);  // car roof
		line(10+i,240,35+i,240);  //car base line
		line(190+i,240,165+i,240);  //car base line
		line(65+i,240,135+i,240);   //car base line
		arc(50+i,240,90,180,40);
		arc(150+i,240,0,90,40);

		circle(50+i,240,15);      //wheel

		circle(150+i,240,15);    //wheel
		outtextxy(200,300,"PRESS ANY KEY TO EXIT AFTER CAR GOES OUT OF SCREEN");
		delay(5);
	}

	goto label;
	}
}

void main()
{
clrscr();
Car o;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
o.design();
getch();
}