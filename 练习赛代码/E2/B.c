#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	double x,y,z;
	scanf("%lf%lf%lf",&x,&y,&z);
	double s;
	double up;
	double down;
	double upup;
	up=acos(sin(x));
	upup=log(1+fabs(sinh(y)));
	down=2+cos(z);
	s=pow(up,upup)/down;
	printf("%.2f",s);
	return 0;
}

