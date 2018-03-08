#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3/bgi");
int c=15;
int d=4;
int x=getmaxx(),y=getmaxy(),f=40;
while(!kbhit())
{
settextstyle(random(f),random(d),random(c));
setcolor(random(c));
outtextxy(random(x),random(y),"Aniket");
delay(200);

}
getch();
}




















