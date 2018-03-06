#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:/turboc3/bgi");
 line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
 line(getmaxx()/2,0,getmaxx()/2,getmaxy());
 circle(100,100,50);
 outtextxy(100,210,"Circle");
 rectangle(400,50,600,150);
 outtextxy(500,180,"Reactangle");
 ellipse(100,350,0,360,50,25);
 outtextxy(150,420,"Ellipse");
 ellipse(500,350,0,180,50,25);
 outtextxy(450,420,"Half Ellipse");
 getch();
}