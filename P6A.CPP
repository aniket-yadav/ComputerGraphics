#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
clrscr();
int gd=DETECT,gm,x1,x2,y1,y2,xf,yf;
initgraph(&gd,&gm,"c://turboc3/bgi");
cout<<"Enter points :";
cin>>x1>>y1>>x2>>y2;
rectangle(x1,y1,x2,y2);
cout<<"Enter Scaling factor:";
cin>>xf>>yf;
cleardevice();
rectangle(x1*xf,y1*yf,x2*xf,y2*yf);
getch();
}