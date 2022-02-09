#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	double x,y;
	double a;
	double fai;
	while(scanf("%lf%lf",&x,&y)!=EOF)
	{
		a=sqrt(x*x+y*y);
		fai=atan2(y,x);
		if(x>1e-6&&fabs(y)<1e-6)
		{
			printf("x=%.2fcos(ct)\n",a);
		}
		else if(fai>1e-6)
		{
			printf("x=%.2fcos(ct+%.2f)\n",a,fai);
		}
		else if(fai<-1e-6)
		{
			printf("x=%.2fcos(ct%.2f)\n",a,fai);
		}
	}
	return 0;
}

