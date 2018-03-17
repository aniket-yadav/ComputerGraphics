#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,x2,x1,y2,y1,xn,yn;
double r11,r12,r21,r22,th;

initgraph(&gd,&gm,"c://turboc3/bgi");
cout<<"Enter x1,y1,x2,y2:";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"Enter angle: ";
cin>>th;
r11=cos((th*3.1428)/180);
r12= sin((th*3.1428)/180);
r21=(-sin((th*3.1428)/180));
r22=cos((th*3.1428)/180);
xn=((x2*r11)-(y2*r21));
yn=((x2*r12)+(y2*r22));
line(x1,y1,xn,yn);
getch();
}