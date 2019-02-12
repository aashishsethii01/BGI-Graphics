#include<time.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int random1(){
int x=getmaxx();
int num = (rand() % (x - 10 + 1)) + 10;
	return num ;
}
int random2(){
int y=getmaxy();
int num = (rand() % (y - 10 + 1)) + 10;
	return num ;
}


void main(){
int gd=DETECT,gm,a[10],b[10];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<getmaxx()<<"y= "<<getmaxy();
 
int x,y;
time_t t;

while(!kbhit()){
	
	l:srand((unsigned) time(&t));

	int x1=random1();
	int y1=random2();


	circle(x1,y1,10);


	if(y1<=getmaxy()/2&&x1<=getmaxx()/2 ){
		int count=0;
		while(x1!=10){
			count++;
			x1--;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=getmaxy()-10){
			count++;
			x1++;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=getmaxx()-10){
			count++;
			x1++;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=10){					//for first quadrant this loop and above
			count++;
			x1--;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		if(count<4){
		    goto l;
		}
		
	}

	if(y1<=getmaxy()/2&&x1>=getmaxx()/2){
		   int count=0;
		while(y1!=10){
			count++;
			x1--;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=10){
			count++;
			x1--;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=getmaxy()-10){
			count++;
			x1++;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=getmaxx()-10){				//for second quadrant this loop and above
			count++;
			x1++;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		if(count<4){
		      goto l;
		}
	    
	}

	if(y1>=getmaxy()/2&&x1<=getmaxx()/2){
		      int count=0;
		while(y1!=getmaxy()-10){
			count++;
			x1++;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=getmaxx()-10){
			count++;
			x1++;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=10){
			count++;
			x1--;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=10){							//for third quadrant this loop and above
			count++;
			x1--;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		if(count<4){
			goto l;
		}
		
	}

	if(y1>=getmaxy()/2&&x1>=getmaxx()/2){
		     int count=0;
		while(x1!=getmaxx()-10){
			count++;
			x1++;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=10){
			count++;
			x1--;
			y1--;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(x1!=10){
			count++;
			x1--;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		while(y1!=getmaxy()-10){			//for fourth quadrant this loop and above
			count++;
			x1++;
			y1++;
			cleardevice();
			circle(x1,y1,10);
			delay(40);
		}

		if(count<4){
		       goto l;
		}
		

	}
}
getch();

}
