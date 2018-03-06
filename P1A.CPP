#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3/bgi");
setbkcolor(15);
setcolor(4);
circle(getmaxx()/2,getmaxy()/2,40);
rectangle(100,100,200,200);
outtextxy(getmaxx()/2,getmaxy()/2-50,"Circle");
outtextxy(100,90,"Rectangle");

getch();

}