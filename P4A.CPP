#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,x1,y1,x2,y2,delx,dely,dx,dy,l,i,xnew,ynew;
initgraph(&gd,&gm,"c://turboc3/bgi");
cout<<"Enter Points of Line x1,y1,x2,y2 :";
cin>>x1>>y1>>x2>>y2;
dx=abs(x2-x1),dy=abs(y2-y1);
if(dx>=dy)
{
l=dx;
}
else
{
l=dy;
}
delx=dx/l,dely=dy/l;
xnew=x1+0.5,ynew=y1+0;
putpixel(xnew,ynew,4);
i=1;
while(i<=l)
{
xnew=xnew+delx;
ynew=ynew+dely;
putpixel(xnew,ynew,4);
i++;
}
getch();
}