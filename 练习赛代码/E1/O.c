#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long a,b,x,y;
	scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
	long long sum1;
	long long sum2;
	sum1=x*fabs(a)+x*fabs(b);
	long long max;
	long long min;
	max=(fabs(a)>=fabs(b))?fabs(a):fabs(b);
	min=(fabs(a)>=fabs(b))?fabs(b):fabs(a);
	if(a*b>=0)
	{
		sum2=y*min+x*(max-min);
	}
	else
	{
		sum2=y*min+x*(max+min);
	}
	long long sum;
	sum=(sum1<=sum2)?sum1:sum2;
	printf("%lld",sum);
	return 0;
}

