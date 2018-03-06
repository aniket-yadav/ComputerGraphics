#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3/bgi");
rectangle(300,200,550,400);
line(300,200,150,200);
line(150,200,150,400);
line(150,400,300,400);
line(225,100,300,200);
line(225,100,150,200);
line(550,200,500,100);
line(225,100,500,100);
rectangle(200,300,250,400);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(301,201,WHITE);
floodfill(152,202,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(226,102,WHITE);
setfillstyle(HATCH_FILL,BROWN);
floodfill(301,105,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(202,302,WHITE);
getch();
}