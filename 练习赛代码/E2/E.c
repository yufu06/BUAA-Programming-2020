#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	long long l=0,r=0;
	long long temp_l,temp_r;
	int i;
	long sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&temp_l,&temp_r);
		if(temp_l>r)
		{
			sum+=(temp_r-temp_l);
		}
		else
		{
			sum+=(temp_r-r);
		}
		l=temp_l;
		r=temp_r;
	}
	printf("%lld",sum);
	return 0;
}

