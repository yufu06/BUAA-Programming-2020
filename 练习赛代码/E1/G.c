#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	long long n,m;
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&n,&m);
		if(n>=2*m)
		{
			printf("%lld\n",m);
		}
		else if(m>=2*n)
		{
			printf("%lld\n",n);
		}
		else
		{
			long long cnt;
			cnt=floor((m+n)/3);
			printf("%lld\n",cnt);
		}
	}
	return 0;
}

