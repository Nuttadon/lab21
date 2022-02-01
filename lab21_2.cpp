#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
double x1=a->x,y1=a->y,x2=a->x+a->w,y2=a->y-a->h;
double i1=b->x,j1=b->y,i2=b->x+b->w,j2=b->y-b->h;
double area;
double width = min(x2,i2) - max(x1,i1);
double heigh = min(y1,j1) - max(y2,j2);
	if(x1<i2&&y1>j2&&x2>i1&&y2<j1) {
		area = width*heigh;
	}
	    else area=0;
return area;
}