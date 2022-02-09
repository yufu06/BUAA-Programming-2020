#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long wgt[100010];
int main()
{
	long long n,m,w;
	scanf("%lld%lld%lld",&n,&m,&w);
	w-=m;
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&wgt[i]);
	}
	int cnt=0;
	int j=1;
	for(i=n;i>=j;i--)
	{
		if(i==j)
		{
			cnt++;
		}
		else if(wgt[i]+wgt[j]<=w)
		{
			j++;
			cnt++;
		}
		else
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

