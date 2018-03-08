#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c://turboc3/bgi");
circle(getmaxx()/2,getmaxy()/2,100);
circle(getmaxx()/2-40,getmaxy()/2-30,10);
circle(getmaxx()/2+40,getmaxy()/2-30,10);
for(i=0;i<90;i++)
{

ellipse(getmaxx()/2,getmaxy()/2+30,270-i,270+i,60,30);
delay(40);
}

getch();
}
