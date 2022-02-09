#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long a,b;
	unsigned long long sum;
	int signa,signb;
	scanf("%lld%lld",&a,&b);
	if(a>0)
	{
		signa=1;
	}
	else if(a<0)
	{
		signa=-1;
	}
	else
	{
		signa=0;
	}
	if(b>0)
	{
		signb=1;
	}
	else if(b<0)
	{
		signb=-1;
	}
	else
	{
		signb=0;
	}
	if(signa*signb<=0)
	{
		printf("%lld",a+b);
	}
	else if(signa==1&&signb==1)
	{
		sum=(unsigned long long)a+b;
		if(sum>9223372036854775807)
		{
			printf("PO!");
		}
		else
		{
			printf("%ull",sum);
		}
	}
	else if(signa==-1&&signb==-1)
	{
		if(a==-9223372036854775808&&b==-9223372036854775808)
		{
			printf("NO!");
		}
		else
		{
			a*=-1;
			b*=-1;
			sum=(unsigned long long)a+b;
			if(sum>9223372036854775808)
			{
				printf("NO!");
			}
			else
			{
				printf("%lld",-a-b);
			}	
		}
	}
	return 0;
}
