#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,x,y,x1,y1,y2,x2,e,dx,dy,i;
initgraph(&gd,&gm,"c://turboc3/bgi");
line(100,100,400,400);
cout<<"Enter points x1,y1,x2,y2:";
cin>>x1>>y1>>x2>>y2;
dx=x2-x1,dy=y2-y1;
e=(dy/dx)-0.5;
x=x1,y=y1;
for(i=0;i<dx;i++)
{
putpixel(x,y,4);
while(e>=0)
{
y=y+1;
e=e-1;
}
x=x+1;
e=dy/dx+e;
}
getch();
}