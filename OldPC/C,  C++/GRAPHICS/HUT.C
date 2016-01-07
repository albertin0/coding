#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

int main()
{
	int gd = DETECT, gm, i, j, k, maxx, maxy, midx, midy;
	int array[] ={270,180,320,80,370,180,270,180};
	initgraph(&gd,&gm, " ");
	setbkcolor(0);
	maxx=getmaxx();
	maxy=getmaxy();
	setcolor(2);
	rectangle(0,0,maxx,maxy);
	setcolor(4);
	rectangle(5,5,maxx-5,maxx-5);
	setextjustify(LEFT_TEXT,TOP_TEXT);
	settextstyle(10,HORIZ_DIR,1);
	outtextxy(150,7,"COMPUTER GRAPHICS");
	midx=maxx/2;
	midy=maxy/2;
	setcolor(6);
	rectangle(midx-50,midy-50,midx+50,midy+50);
	setfillstyle(SOLID_FILL,3);
	bar(midx-250,midy+200,midx+250,midy+210);
	setcolor(6);
	setfillstyle(SOLID_FILL,6);
	setcolor(5);
	drawpoly(4,array);
	fillpoly(4,array);
	setcolor(5);
	ellipse(midx,midy,0,360,40,40);
	setfillstyle(SOLID_FILL,2);
	fillellipse(midx,midy,40,40);
	setcolor(4);
	setfillstyle(SOLID_FILL,8);
	bar3d(20,100,50,470,10,1);
	bar3d(580,100,610,470,10,1);
	setcolor(5);
	line(310,205,330,205);
	moveto(310,205);
	linerel(-20,60);
	linerel(10,0);
	linerel(10,-30);
	linerel(15,0);
	linerel(10,30);
	linerel(10,0);
	linerel(-15,60);
	movetext(150,300,100,600,200,300);
	outtextxy(150,300,"by ALBE");
	while(!kbhit()){}
	closegraph();
	restorecrtmode();
	return 0;
}
}