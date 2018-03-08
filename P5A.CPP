#include<iostream.h>
#include<conio.h>
#include<graphics.h>


void main()
{
int gd=DETECT,gm;
int x,y,a,b,r;
float m;
cout<<"Enter radius: ";
cin>>r;
initgraph(&gd,&gm,"c://turboc3/bgi");
x=0,y=r;
m=(5/4)-r;
while(x<=y)
{
	putpixel(getmaxx()/2+x,getmaxy()/2+y,4);

	putpixel(getmaxx()/2+y,getmaxy()/2+x,4);

	putpixel(getmaxx()/2-y,getmaxy()/2+x,4);

	putpixel(getmaxx()/2-x,getmaxy()/2+y,4);

	putpixel(getmaxx()/2-x,getmaxy()/2-y,4);

	putpixel(getmaxx()/2-y,getmaxy()/2-x,4);

	putpixel(getmaxx()/2+y,getmaxy()/2-x,4);

	putpixel(getmaxx()/2+x,getmaxy()/2-y,4);

	if(m<0)
	{
		m=m+2*x+3;
	}
	else
	{
		m=m+2*(x-y)+5;
		y-=1;
	}

	x+=1;

}
getch();
}