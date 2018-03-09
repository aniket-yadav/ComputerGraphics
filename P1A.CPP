#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3/bgi");
setbkcolor(15);
setcolor(4);
circle(300,90,40);
rectangle(50,50,150,150);
arc(80,250,0,270,50);
sector(300,250,0,270,40,40);
ellipse(450,180,0,360,60,30);
outtextxy(300,20,"Circle");
outtextxy(100,20,"Rectangle");
outtextxy(70,180,"Arc");
outtextxy(280,180,"Sector");
outtextxy(440,130,"Ellipse");
getch();

}