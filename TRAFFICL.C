#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void outline(int x, int y)
{
 setcolor(WHITE);
 outtextxy(x-120, 30, "Traffic Lights using Graphics in C");
 rectangle(x-50,y-170,x+50,y+130);
 circle(x,y-110,40);
 circle(x,y-20,40);
 circle(x,y+70,40);
}
void main()
{
 int gd = DETECT, gm;
 int x, y;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
 x = getmaxx()/2;
 y = getmaxy()/2;
 outline(x,y);
 delay(1000);
 while(1)
 {
  outline(x,y);
  setcolor(RED);
  setfillstyle(1,RED);
  circle(x,y-110,40);
  floodfill(x,y-110,RED);
  delay(2000);
  cleardevice();
  outline(x,y);
  setcolor(YELLOW);
  setfillstyle(1,YELLOW);
  circle(x,y-20,40);
  floodfill(x,y-20,YELLOW);
  delay(2000);
  cleardevice();
  outline(x,y);
  setcolor(GREEN);
  setfillstyle(1,GREEN);
  circle(x,y+70,40);
  floodfill(x,y+70,GREEN);
  delay(2000);
  cleardevice();
  if(kbhit())
  {
   closegraph();
   exit(1);
  }
 }
}