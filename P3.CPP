#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://turboc3/bgi");
circle(100,100,50);
outtextxy(75,170,"Circle");
rectangle(200,50,350,150);
outtextxy(240,170,"Rectangle");
ellipse(500,100,0,360,100,50);
outtextxy(480,170,"Ellipse");
line(100,200,500,200);
outtextxy(300,210,"Line");
circle(150,300,60);
circle(150,300,50);
outtextxy(125,380,"Concentric Circle");
rectangle(400,250,500,350);
outtextxy(425,360,"Square");
getch();
}