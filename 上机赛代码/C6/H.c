#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
double f1(double the,double a,double lam)
{
	return (2*the-1)*lam*the*log(2)-a;
}
double f(double the,double a,double lam)
{
	return -a*log2(2*the-1)+lam*the*the;
}
int main()
{
	double a,lam;
	double l,r;
	while(scanf("%lf%lf",&a,&lam)!=EOF)
	{
		l=0.5;
		r=1.0;
		if(f1(r,a,lam)<=0)
		{
			printf("%.10f %.10f\n",f(r,a,lam),r);
		}
		else if(f1(l,a,lam)>=0)
		{
			printf("%.10f %.10f\n",f(l,a,lam),l);
		}
		else
		{
			int t;
			double mid;
			for(t=0;t<100000;t++)
			{
				mid=(l+r)/2;
				if(f1(mid,a,lam)>=0)
				{
					r=mid;
				}
				else
				{
					l=mid;
				}
			}
			printf("%.10f %.10f\n",f(mid,a,lam),mid);
		}
	}
	return 0;
}

