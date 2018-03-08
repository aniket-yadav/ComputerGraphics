#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	long rx,ry;
	int x,y;
	float dx,dy,d1,d2;
	cout<<"Enter the radius: rx: ";
	cin>>rx;
	cout<<"                  ry: ";
	cin>>ry;
	initgraph(&gd,&gm,"C://TURBOC3/BGI");


	x=0;
	y=ry;
	d1=ry*ry-rx*rx*ry+rx*rx/4;
	dx=2.0*ry*ry*x;
	dy=2.0*rx*rx*y;

	do{
		if(d1<0){
			x=x+1;
			dx=2*ry*ry*x;
			d1=d1+dx+ry*ry;
		}else{
			x=x+1;
			y=y-1;
			dx=2*ry*ry*x;
			dy=2*rx*rx*y;
			d1=d1+dx-dy-ry*ry;

		}

		putpixel(getmaxx()/2+x,getmaxy()/2+y,6);
		putpixel(getmaxx()/2-x,getmaxy()/2-y,6);
		putpixel(getmaxx()/2+x,getmaxy()/2-y,6);

		putpixel(getmaxx()/2-x,getmaxy()/2+y,6);

	} while(dx<=dy);
	d2=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-(rx*rx*ry*ry);
	do{


		if(d2>0){
			x=x;
			y=y-1;
			dy=2*rx*rx*y;
			d2=d2-dy+rx*rx;
		}else{
			x=x++;
			y=y-1;
			dy=2*rx*rx*y;
			dx=2*ry*ry*x;
			d2=d2+dx-dy+rx*rx;
		}   	putpixel(getmaxx()/2+x,getmaxy()/2+y,6);

		putpixel(getmaxx()/2-x,getmaxy()/2-y,6);

		putpixel(getmaxx()/2+x,getmaxy()/2-y,6);

		putpixel(getmaxx()/2-x,getmaxy()/2+y,6);
	} while(y>0);
	getch();
}