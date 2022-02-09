#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double delta;
	delta=b*b-4*a*c;
	if(a==0)
	{
		printf("No");
	}
	else
	{
		if(fabs(delta)<=1e-6)
		{
			printf("1");
		}
		else if(delta>1e-6)
		{
			printf("2");
		}
		else if(delta<-1e-6)
		{
			printf("0");
		}
	}
	return 0;
}

