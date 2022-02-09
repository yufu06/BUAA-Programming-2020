#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define PI 3.1415926
int main()
{
	int x,y,d;
	scanf("%d,%d,%d",&x,&y,&d);
	double x1,y1,the;
	the=(double)(PI/180)*d;
	x1=x*cos(the)-y*sin(the);
	y1=x*sin(the)+y*cos(the);
	printf("(%.2f,%.2f)",x1,y1);
	return 0;
}

