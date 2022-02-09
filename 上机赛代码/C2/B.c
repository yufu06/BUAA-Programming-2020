#include <stdio.h>	
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define PI 3.1415926
int main()
{
	double a,b,r;
	scanf("%lf%lf%lf",&r,&a,&b);
	double c;
	double s1;
	double v;
	double s2;
	c=2*PI*r;
	s1=PI*r*r;
	double i;
	i=4.0/3.0;
	v=i*PI*r*r*r;
	s2=PI*a*b;
	printf("%.2f %.2f %.2f %.2f",c,s1,v,s2);
	return 0;
}

