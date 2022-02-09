#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	long long x,y,k;
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&x,&y,&k);
		long long total;
		total=k*(y+1);
		long long cnt=0;
		if((total-1)%(x-1)==0)
		{
			cnt=(total-1)/(x-1);
		}
		else
		{
			cnt=((total-1)/(x-1))+1;
		}
		cnt+=k;
		printf("%lld\n",cnt);
	}
	return 0;
}

