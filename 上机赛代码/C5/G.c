#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long a[200010];
long long b[200010];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	long long max=0;
	int i;
	long long temp_a,temp_s;
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&temp_a,&temp_s);
		a[temp_s]=temp_a;
		max=(temp_s>max)?temp_s:max;
	}
	for(i=0;i<m;i++)
	{
		scanf("%lld%lld",&temp_a,&temp_s);
		b[temp_s]=temp_a;
		max=(temp_s>max)?temp_s:max;
	}
	for(i=max;i>=0;i--)
	{
		if(a[i]+b[i]!=0)
		{
			printf("%lld %d ",a[i]+b[i],i);
		}
	}
	return 0;
}

