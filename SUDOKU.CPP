//prototype 1 sudoku
//mayukh das
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
union REGS in,out;
																																				#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int anscheck1(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o)
{
int r;
if(a==2&&b==1&&c==3&&d==1&&e==4&&f==4&&g==1&&h==1&&i==5&&j==4&&k==2&&l==3&&m==1&&n==4&&o==6)
r=1;
else
r=0;
return r;
}
																																				
int anscheck2(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o)
{
int r;
if(a==4&&b==1&&c==4&&d==1&&e==5&&f==2&&g==6&&h==5&&i==4&&j==2&&k==6&&l==2&&m==1&&n==1&&o==3)
r=1;
else
r=0;
return r;
}
																																			
int anscheck3(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o)
{
int r;
if(a==2&&b==4&&c==3&&d==2&&e==6&&f==6&&g==5&&h==2&&i==3&&j==6&&k==6&&l==2&&m==4&&n==4&&o==6)
r=1;
else
r=0;
return r;
}
int anscheck4(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o)
{
int r;
if(a==1&&b==4&&c==2&&d==1&&e==3&&f==2&&g==5&&h==1&&i==2&&j==4&&k==5&&l==1&&m==6&&n==6&&o==2)
r=1;
else
r=0;
return r;
}
int anscheck5(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o)
{
int r;
if(a==1&&b==2&&c==1&&d==2&&e==5&&f==5&&g==6&&h==4&&i==3&&j==2&&k==5&&l==6&&m==4&&n==6&&o==3)
r=1;
else
r=0;
return r;
}

void restmouptr(int x1,int y1,int x2,int y2)//////////////////////////////////////////////
{
in.x.ax=7;
in.x.cx=x1;
in.x.dx=x2;
int86(0,&in,&out);
in.x.ax=8;
in.x.cx=y1;
in.x.dx=y2;
int86(0,&in,&out);
}
int callmou()
{
in.x.ax=1;
int86(0x33,&in,&out);
return 1;
}
int mouhide()//////////////////////////////////////////////
{
in.x.ax=2;
int86(0x33,&in,&out);
return 1;
}
void mouposi(int &xpos,int &ypos,int &click)//////////////////////////////////////////////
{
in.x.ax=3;
int86(0x33,&in,&out);
click=out.x.bx;
xpos=out.x.cx;
ypos=out.x.dx;
}
void setposi(int &xpos,int &ypos)//////////////////////////////////////////////
{
in.x.ax=4;
in.x.cx=xpos;
in.x.dx=ypos;
int86(0x33,&in,&out);
}
//end mouse
void main()
{
clrscr();
int level,mopt,opt;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
settextstyle(4,0,4);
outtextxy(300,100,"sudoku");
line(300,140,390,140);
getch();

closegraph();
mnm:;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(RED);
callmou();
settextstyle(3,0,5);
outtextxy(100,100,"1.START");
outtextxy(100,200,"2.HELP");
outtextxy(100,300,"3.EXIT");
cin>>mopt;
if(mopt==1)
{
lvm:;
closegraph();
cout<<"enter the level";
cin>>level;
switch(level)
{
case 1:
{
clrscr();
int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15;
int gd=DETECT,gm,level;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
line(50,30,350,30);
line(50,80,350,80);
line(50,130,350,130);
line(50,180,350,180);
line(50,230,350,230);
line(50,280,350,280);
line(50,330,350,330);
//
line(50,30,50,330);
line(100,30,100,330);
line(150,30,150,330);
line(200,30,200,330);
line(250,30,250,330);
line(300,30,300,330);
line(350,30,350,330);
//
settextstyle(1,0,1);
outtextxy(70,45,"4");
outtextxy(120,45,"5");
outtextxy(170,90,"2");///
outtextxy(170,145,"3");
outtextxy(270,145,"6");
outtextxy(320,145,"2");
outtextxy(70,190,"6");
outtextxy(120,190,"2");
outtextxy(70,145,"5");
outtextxy(220,90,"5");
outtextxy(320,90,"6");
outtextxy(220,190,"3");
outtextxy(220,245,"4");
outtextxy(120,245,"6");
outtextxy(70,290,"1");
outtextxy(120,290,"3");
outtextxy(270,290,"2");
outtextxy(320,290,"5");
outtextxy(170,45,"6");
outtextxy(320,45,"3");
outtextxy(170,245,"5");
//
setfillstyle(SOLID_FILL,GREEN);
floodfill(70,90,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(120,90,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(220,45,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(270,45,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,145,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(270,90,WHITE);
setfillstyle(SOLID_FILL,CYAN);
floodfill(220,145,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(170,190,WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(320,190,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(270,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(170,290,WHITE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(220,290,WHITE);
settextstyle(2,0,4);
outtextxy(360,100-70,"Enter your answers according to the color series");
outtextxy(360,120-70,"RED");
outtextxy(360,140-70,"WHITE");
outtextxy(360,160-70,"GREEN");
outtextxy(360,180-70,"BLUE");
outtextxy(360,200-70,"BROWN");
outtextxy(360,220-70,"YELLOW");
outtextxy(360,240-70,"CYAN");
outtextxy(360,260-70,"LIGHT CYAN");
outtextxy(360,280-70,"BLACK");
outtextxy(360,300-70,"LIGHT RED");
outtextxy(360,320-70,"MAGENTA");
outtextxy(360,340-70,"LIGHT GREEN");
outtextxy(360,360-70,"LIGHT BLUE");
outtextxy(360,380-70,"DARK GREY");
outtextxy(360,400-70,"LIGHT MAGENTA");
cin>>val1;
cin>>val2;
cin>>val3;
cin>>val4;
cin>>val5;
cin>>val6;
cin>>val7;
cin>>val8;
cin>>val9;
cin>>val10;
cin>>val11;
cin>>val12;
cin>>val13;
cin>>val14;
cin>>val15;
if(anscheck1(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15)==1)
{
settextstyle(5,0,5);
outtextxy(400,400,"YOU WIN");
}
else
{
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(5,0,6);
outtextxy(300,200,"YOU LOSE");
}
getch();
closegraph();
cout<<"for main menu press 1\nfor level menu press 0";
cin>>opt;
if(opt==1)
{
getch();
clrscr();
goto mnm;
}
else if(opt==0)
{
getch();
clrscr();
goto lvm;
}
else
{
cout<<"error";
getch();
clrscr();
goto mnm;
}
}break;
case 2:
{
clrscr();
int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15;
int gd=DETECT,gm,level;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
line(50,30,350,30);
line(50,80,350,80);
line(50,130,350,130);
line(50,180,350,180);
line(50,230,350,230);
line(50,280,350,280);
line(50,330,350,330);
//
line(50,30,50,330);
line(100,30,100,330);
line(150,30,150,330);
line(200,30,200,330);
line(250,30,250,330);
line(300,30,300,330);
line(350,30,350,330);
//
settextstyle(1,0,1);
outtextxy(70,45,"5");
outtextxy(120,45,"3");
outtextxy(170,90,"6");
outtextxy(170,145,"4");
outtextxy(270,145,"3");
outtextxy(320,145,"5");
outtextxy(70,190,"3");
outtextxy(120,190,"6");
outtextxy(70,145,"1");
outtextxy(220,90,"2");
outtextxy(320,90,"3");
outtextxy(220,190,"1");
outtextxy(220,245,"5");
outtextxy(120,245,"4");
outtextxy(70,290,"2");
outtextxy(120,290,"5");
outtextxy(270,290,"6");
outtextxy(320,290,"4");
outtextxy(170,45,"2");
outtextxy(320,45,"6");
outtextxy(170,245,"3");
//
setfillstyle(SOLID_FILL,GREEN);
floodfill(70,90,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(120,90,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(220,45,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(270,45,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,145,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(270,90,WHITE);
setfillstyle(SOLID_FILL,CYAN);
floodfill(220,145,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(170,190,WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(320,190,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(270,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(170,290,WHITE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(220,290,WHITE);
settextstyle(2,0,4);
outtextxy(360,100-70,"Enter your answers according to the color series");
outtextxy(360,120-70,"RED");
outtextxy(360,140-70,"WHITE");
outtextxy(360,160-70,"GREEN");
outtextxy(360,180-70,"BLUE");
outtextxy(360,200-70,"BROWN");
outtextxy(360,220-70,"YELLOW");
outtextxy(360,240-70,"CYAN");
outtextxy(360,260-70,"LIGHT CYAN");
outtextxy(360,280-70,"BLACK");
outtextxy(360,300-70,"LIGHT RED");
outtextxy(360,320-70,"MAGENTA");
outtextxy(360,340-70,"LIGHT GREEN");
outtextxy(360,360-70,"LIGHT BLUE");
outtextxy(360,380-70,"DARK GREY");
outtextxy(360,400-70,"LIGHT MAGENTA");
cin>>val1;
cin>>val2;
cin>>val3;
cin>>val4;
cin>>val5;
cin>>val6;
cin>>val7;
cin>>val8;
cin>>val9;
cin>>val10;
cin>>val11;
cin>>val12;
cin>>val13;
cin>>val14;
cin>>val15;
if(anscheck2(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15)==1)
{
settextstyle(5,0,5);
outtextxy(400,400,"YOU WIN");
}
else
{
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(5,0,6);
outtextxy(300,200,"YOU LOSE");
}
getch();}
getch();
closegraph();
cout<<"for main menu press 1\nfor level menu press 0";
cin>>opt;
if(opt==1)
{
getch();
clrscr();
goto mnm;
}
else if(opt==0)
{
getch();
clrscr();
goto lvm;
}
else
{
cout<<"error";
getch();
clrscr();
goto mnm;
}break;
case 3:
{
clrscr();
int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15;
int gd=DETECT,gm,level;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
line(50,30,350,30);
line(50,80,350,80);
line(50,130,350,130);
line(50,180,350,180);
line(50,230,350,230);
line(50,280,350,280);
line(50,330,350,330);
//
line(50,30,50,330);
line(100,30,100,330);
line(150,30,150,330);
line(200,30,200,330);
line(250,30,250,330);
line(300,30,300,330);
line(350,30,350,330);
//
settextstyle(1,0,1);
outtextxy(70,45,"1");
outtextxy(120,45,"5");
outtextxy(170,90,"1");
outtextxy(170,145,"3");
outtextxy(270,145,"1");
outtextxy(320,145,"2");
outtextxy(70,190,"5");
outtextxy(120,190,"4");
outtextxy(70,145,"4");
outtextxy(220,90,"4");
outtextxy(320,90,"5");
outtextxy(220,190,"1");
outtextxy(220,245,"3");
outtextxy(120,245,"1");
outtextxy(70,290,"2");
outtextxy(120,290,"3");
outtextxy(270,290,"5");
outtextxy(320,290,"1");
outtextxy(170,45,"6");
outtextxy(320,45,"3");
outtextxy(170,245,"5");
//
setfillstyle(SOLID_FILL,GREEN);
floodfill(70,90,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(120,90,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(220,45,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(270,45,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,145,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(270,90,WHITE);
setfillstyle(SOLID_FILL,CYAN);
floodfill(220,145,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(170,190,WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(320,190,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(270,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(170,290,WHITE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(220,290,WHITE);
settextstyle(2,0,4);
outtextxy(360,100-70,"Enter your answers according to the color series");
outtextxy(360,120-70,"RED");
outtextxy(360,140-70,"WHITE");
outtextxy(360,160-70,"GREEN");
outtextxy(360,180-70,"BLUE");
outtextxy(360,200-70,"BROWN");
outtextxy(360,220-70,"YELLOW");
outtextxy(360,240-70,"CYAN");
outtextxy(360,260-70,"LIGHT CYAN");
outtextxy(360,280-70,"BLACK");
outtextxy(360,300-70,"LIGHT RED");
outtextxy(360,320-70,"MAGENTA");
outtextxy(360,340-70,"LIGHT GREEN");
outtextxy(360,360-70,"LIGHT BLUE");
outtextxy(360,380-70,"DARK GREY");
outtextxy(360,400-70,"LIGHT MAGENTA");
cin>>val1;
cin>>val2;
cin>>val3;
cin>>val4;
cin>>val5;
cin>>val6;
cin>>val7;
cin>>val8;
cin>>val9;
cin>>val10;
cin>>val11;
cin>>val12;
cin>>val13;
cin>>val14;
cin>>val15;
if(anscheck3(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15)==1)
{
settextstyle(5,0,5);
outtextxy(400,400,"YOU WIN");
}
else
{
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(5,0,6);
outtextxy(300,200,"YOU LOSE");
}
getch();}
getch();
closegraph();
cout<<"for main menu press 1\nfor level menu press 0";
cin>>opt;
if(opt==1)
{
getch();
clrscr();
goto mnm;
}
else if(opt==0)
{
getch();
clrscr();
goto lvm;
}
else
{
cout<<"error";
getch();
clrscr();
goto mnm;
}
break;

case 4:
{
clrscr();
int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15;
int gd=DETECT,gm,level;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
line(50,30,350,30);
line(50,80,350,80);
line(50,130,350,130);
line(50,180,350,180);
line(50,230,350,230);
line(50,280,350,280);
line(50,330,350,330);
//
line(50,30,50,330);
line(100,30,100,330);
line(150,30,150,330);
line(200,30,200,330);
line(250,30,250,330);
line(300,30,300,330);
line(350,30,350,330);
//
settextstyle(1,0,1);
outtextxy(70,45,"3");
outtextxy(120,45,"6");
outtextxy(170,90,"4");
outtextxy(170,145,"3");
outtextxy(270,145,"6");
outtextxy(320,145,"1");
outtextxy(70,190,"6");
outtextxy(120,190,"5");
outtextxy(70,145,"4");
outtextxy(220,90,"6");
outtextxy(320,90,"5");
outtextxy(220,190,"3");
outtextxy(220,245,"4");
outtextxy(120,245,"3");
outtextxy(70,290,"1");
outtextxy(120,290,"4");
outtextxy(270,290,"5");
outtextxy(320,290,"3");
outtextxy(170,45,"5");
outtextxy(320,45,"2");
outtextxy(170,245,"2");
//
setfillstyle(SOLID_FILL,GREEN);
floodfill(70,90,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(120,90,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(220,45,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(270,45,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,145,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(270,90,WHITE);
setfillstyle(SOLID_FILL,CYAN);
floodfill(220,145,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(170,190,WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(320,190,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(270,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(170,290,WHITE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(220,290,WHITE);
settextstyle(2,0,4);
outtextxy(360,100-70,"Enter your answers according to the color series");
outtextxy(360,120-70,"RED");
outtextxy(360,140-70,"WHITE");
outtextxy(360,160-70,"GREEN");
outtextxy(360,180-70,"BLUE");
outtextxy(360,200-70,"BROWN");
outtextxy(360,220-70,"YELLOW");
outtextxy(360,240-70,"CYAN");
outtextxy(360,260-70,"LIGHT CYAN");
outtextxy(360,280-70,"BLACK");
outtextxy(360,300-70,"LIGHT RED");
outtextxy(360,320-70,"MAGENTA");
outtextxy(360,340-70,"LIGHT GREEN");
outtextxy(360,360-70,"LIGHT BLUE");
outtextxy(360,380-70,"DARK GREY");
outtextxy(360,400-70,"LIGHT MAGENTA");
cin>>val1;
cin>>val2;
cin>>val3;
cin>>val4;
cin>>val5;
cin>>val6;
cin>>val7;
cin>>val8;
cin>>val9;
cin>>val10;
cin>>val11;
cin>>val12;
cin>>val13;
cin>>val14;
cin>>val15;
if(anscheck4(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15)==1)
{
settextstyle(5,0,5);
outtextxy(400,400,"YOU WIN");
}
else
{
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(5,0,6);
outtextxy(300,200,"YOU LOSE");
}
getch();}
getch();
closegraph();
cout<<"for main menu press 1\nfor level menu press 0";
cin>>opt;
if(opt==1)
{
getch();
clrscr();
goto mnm;
}
else if(opt==0)
{
getch();
clrscr();
goto lvm;
}
else
{
cout<<"error";
getch();
clrscr();
goto mnm;
}
break;

case 5:
{clrscr();
int val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15;
int gd=DETECT,gm,level;
initgraph(&gd,&gm,"C:\\TC\\BGI");
callmou();
line(50,30,350,30);
line(50,80,350,80);
line(50,130,350,130);
line(50,180,350,180);
line(50,230,350,230);
line(50,280,350,280);
line(50,330,350,330);
//
line(50,30,50,330);
line(100,30,100,330);
line(150,30,150,330);
line(200,30,200,330);
line(250,30,250,330);
line(300,30,300,330);
line(350,30,350,330);
//
settextstyle(1,0,1);
outtextxy(70,45,"4");
outtextxy(120,45,"6");
outtextxy(170,90,"3");
outtextxy(170,145,"2");
outtextxy(270,145,"4");
outtextxy(320,145,"1");
outtextxy(70,190,"6");
outtextxy(120,190,"1");
outtextxy(70,145,"3");
outtextxy(220,90,"4");
outtextxy(320,90,"6");
outtextxy(220,190,"5");
outtextxy(220,245,"2");
outtextxy(120,245,"3");
outtextxy(70,290,"2");
outtextxy(120,290,"4");
outtextxy(270,290,"1");
outtextxy(320,290,"5");
outtextxy(170,45,"5");
outtextxy(320,45,"3");
outtextxy(170,245,"1");
//
setfillstyle(SOLID_FILL,GREEN);
floodfill(70,90,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(120,90,WHITE);
setfillstyle(SOLID_FILL,RED);
floodfill(220,45,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(270,45,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,145,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(270,90,WHITE);
setfillstyle(SOLID_FILL,CYAN);
floodfill(220,145,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(170,190,WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(320,190,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(70,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(270,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320,245,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(170,290,WHITE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(220,290,WHITE);
settextstyle(2,0,4);
outtextxy(360,100-70,"Enter your answers according to the color series");
outtextxy(360,120-70,"RED");
outtextxy(360,140-70,"WHITE");
outtextxy(360,160-70,"GREEN");
outtextxy(360,180-70,"BLUE");
outtextxy(360,200-70,"BROWN");
outtextxy(360,220-70,"YELLOW");
outtextxy(360,240-70,"CYAN");
outtextxy(360,260-70,"LIGHT CYAN");
outtextxy(360,280-70,"BLACK");
outtextxy(360,300-70,"LIGHT RED");
outtextxy(360,320-70,"MAGENTA");
outtextxy(360,340-70,"LIGHT GREEN");
outtextxy(360,360-70,"LIGHT BLUE");
outtextxy(360,380-70,"DARK GREY");
outtextxy(360,400-70,"LIGHT MAGENTA");
cin>>val1;
cin>>val2;
cin>>val3;
cin>>val4;
cin>>val5;
cin>>val6;
cin>>val7;
cin>>val8;
cin>>val9;
cin>>val10;
cin>>val11;
cin>>val12;
cin>>val13;
cin>>val14;
cin>>val15;
if(anscheck5(val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15)==1)
{
settextstyle(5,0,5);
outtextxy(400,400,"YOU WIN");
}
else
{
closegraph();
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(5,0,6);
outtextxy(300,200,"YOU LOSE");
}
getch();}
getch();
closegraph();
cout<<"for main menu press 1\nfor level menu press 0";
cin>>opt;
if(opt==1)
{
getch();
clrscr();
goto mnm;
}
else if(opt==0)
{
getch();
clrscr();
goto lvm;
}
else
{
cout<<"error";
getch();
clrscr();
goto mnm;
}
break;
default:
{
goto mnm;
}
}}
else if(mopt==2)
{
closegraph();
clrscr();
cout<<"THIS IS A PROGRAM WHICH WILL BE PROVIDING YOU 5 VARIOUS LEVELS OF 6X6 SUDOKU\n LEVELS,YOU CAN SEE THE SUDOKU TABLE BUT CANT SOLVE IT IN THE PROGRAM,YOU CAN\nSOLVE IT EXTERNALLY AND CAN INPUT\nYOUR ANSWERS,AND THE PROGRAM WILL RESPOND TO YOUR ANSWERS,AND TELL IF YOU ARE\nCORRECT OR NOT.AS THIS A PROTOTYPE VERSION ONLY\nFOR THE INVESTAGATORY PROJECT MANY FUNCTIONS AND LEVELS ARE DISABLED,LIKE LEVELS AND MOUSE CLICKS.\nHOPE YOU ENJOY THE PROTOTYPE VERSION!!!!!!!!!!!!!";
getch();
clrscr();
goto mnm;
}
else if(mopt==3)
{
clrscr();
cout<<"BYE!!!!!";
}
else
{
cout<<"ERROR";
getch();
clrscr();
goto mnm;
}
}
//MAYUKH DAS

























































































































































































































































































































































































































































































































































































































