#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:/turboc3/bgi");
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
line(getmaxx()/2,getmaxy(),getmaxx()/2,0);
putpixel(getmaxx()/2,getmaxy()/2,5);
outtextxy(getmaxx()/2+8,getmaxy()/2-12,"0,0");
outtextxy(0,getmaxy()/2+4,"X'");
outtextxy(getmaxx()-8,getmaxy()/2+4,"X");
outtextxy(getmaxx()/2+4,getmaxy()-8,"Y'");
outtextxy(getmaxx()/2+4,0,"Y");

putpixel(getmaxx()/2,getmaxy()/2-40,5);
putpixel(getmaxx()/2,getmaxy()/2-80,5);
putpixel(getmaxx()/2,getmaxy()/2-120,5);
putpixel(getmaxx()/2,getmaxy()/2-160,5);
putpixel(getmaxx()/2,getmaxy()/2-200,5);
outtextxy(getmaxx()/2+4,getmaxy()/2-40,"1");
outtextxy(getmaxx()/2+4,getmaxy()/2-80,"2");
outtextxy(getmaxx()/2+4,getmaxy()/2-120,"3");
outtextxy(getmaxx()/2+4,getmaxy()/2-160,"4");
outtextxy(getmaxx()/2+4,getmaxy()/2-200,"5");
putpixel(getmaxx()/2,getmaxy()/2+40,5);
putpixel(getmaxx()/2,getmaxy()/2+80,5);
putpixel(getmaxx()/2,getmaxy()/2+120,5);
putpixel(getmaxx()/2,getmaxy()/2+160,5);
putpixel(getmaxx()/2,getmaxy()/2+200,5);
outtextxy(getmaxx()/2+4,getmaxy()/2+40,"-1");
outtextxy(getmaxx()/2+4,getmaxy()/2+80,"-2");
outtextxy(getmaxx()/2+4,getmaxy()/2+120,"-3");
outtextxy(getmaxx()/2+4,getmaxy()/2+160,"-4");
outtextxy(getmaxx()/2+4,getmaxy()/2+200,"-5");
putpixel(getmaxx()/2+40,getmaxy()/2,5);
putpixel(getmaxx()/2+80,getmaxy()/2,5);
putpixel(getmaxx()/2+120,getmaxy()/2,5);
putpixel(getmaxx()/2+160,getmaxy()/2,5);
putpixel(getmaxx()/2+200,getmaxy()/2,5);
outtextxy(getmaxx()/2+40,getmaxy()/2+4,"1");
outtextxy(getmaxx()/2+80,getmaxy()/2+4,"2");
outtextxy(getmaxx()/2+120,getmaxy()/2+4,"3");
outtextxy(getmaxx()/2+160,getmaxy()/2+4,"4");
outtextxy(getmaxx()/2+200,getmaxy()/2+4,"5");
putpixel(getmaxx()/2-40,getmaxy()/2,5);
putpixel(getmaxx()/2-80,getmaxy()/2,5);
putpixel(getmaxx()/2-120,getmaxy()/2,5);
putpixel(getmaxx()/2-160,getmaxy()/2,5);
putpixel(getmaxx()/2-200,getmaxy()/2,5);
outtextxy(getmaxx()/2-40,getmaxy()/2+4,"-1");
outtextxy(getmaxx()/2-80,getmaxy()/2+4,"-2");
outtextxy(getmaxx()/2-120,getmaxy()/2+4,"-3");
outtextxy(getmaxx()/2-160,getmaxy()/2+4,"-4");
outtextxy(getmaxx()/2-200,getmaxy()/2+4,"-5");




getch();
}