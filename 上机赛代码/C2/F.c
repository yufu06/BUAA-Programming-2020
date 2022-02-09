#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>0)
	{
		printf("UP\n");
	}
	else if(a<0)
	{
		printf("DOWN\n");
	}
	if(a*b==0)
	{
		printf("MID\n");
	}
	else if(a*b>0)
	{
		printf("LEFT\n");
	}
	else if(a*b<0)
	{
		printf("RIGHT\n");
	}
	double x,y;
	x=(double)-b/(2*a);
	y=(double)(4*a*c-b*b)/(4*a);
	printf("%.2f %.2f\n",x,y);
	int delta;
	delta=b*b-4*a*c;
	if(delta<0)
	{
		printf("NULL\n");
	}
	else if(delta>0)
	{
		double x1,x2;
		x1=(double)(-b+sqrt(delta))/(2*a);
		x2=(double)(-b-sqrt(delta))/(2*a);
		printf("%.2f %.2f\n",x1,x2);
	}
	else if(fabs(delta)==0)
	{
		printf("%.2f\n",x);
	}
	return 0;
}

