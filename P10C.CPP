#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
clrscr();
int gd=DETECT,gm;
int i,maxx,midy;

initgraph(&gd,&gm,"c://TURBOC3/BGI");
maxx=getmaxx();
midy=getmaxy()/2;
for(i=0;i<maxx-150;i=i+5)
{

line(0,midy+37,maxx,midy+37);
line(i,midy+23,i,midy);
line(i,midy,40+i,midy-20);
line(40+i,midy-20,80+i,midy-20);
line(80+i,midy-20,100+i,midy);
line(100+i,midy,120+i,midy);
line(120+i,midy,120+i,midy+23);
line(0+i,midy+23,18+i,midy+23);
line(42+i,midy+23,78+i,midy+23);
line(102+i,midy+23,120+i,midy+23);
line(28+i,midy,43+i,midy-15);
line(43+i,midy-15,57+i,midy-15);
line(57+i,midy-15,57+i,midy);
line(57+i,midy,28+i,midy);
line(62+i,midy-15,77+i,midy-15);
line(77+i,midy-15,92+i,midy);
line(92+i,midy,62+i,midy);
line(62+i,midy,62+i,midy-15);
arc(30+i,midy+23,0,180,12);
arc(90+i,midy+23,0,180,12);
circle(30+i,midy+25,9);
circle(90+i,midy+25,9);
delay(100);
cleardevice();
}
getch();
}
