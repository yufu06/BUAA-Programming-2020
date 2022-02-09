#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		if(a<b)
		{
			printf("-1\n");
		}
		else
		{
			double x1,x2;
			long long m,n;
			m=floor((double)(a+b)/(2*b));
			x1=(double)(a+b)/(2*m);
			n=floor((double)(a-b)/(2*b));
			if(n!=0)
			{
				x2=(double)(a-b)/(2*m);
			}
			if(n==0||x2<b)
			{
				printf("%lf\n",x1);
			}
			else if(x1<b)
			{
				printf("%lf\n",x2);
			}
			else
			{
				if(x1<=x2)
				{
					printf("%lf\n",x1);
				}
				else
				{
					printf("%lf\n",x2);
				}
			}
		}
	}
	return 0;
}
