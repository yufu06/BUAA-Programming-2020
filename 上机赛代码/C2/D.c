#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long a[100000];
int main()
{
	long long n;
	scanf("%lld",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	long long max=a[0];
	long long min=a[0];
	long long cnt=n;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			a[i]=0;
			cnt-=1;
		}
		else if(a[i]==min)
		{
			a[i]=0;
			cnt-=1;
		}
	}
	double avg;
	long long sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	if(cnt==0)
	{
		printf("#DIV/0!");
	}
	else
	{
		avg=(double)sum/cnt;
		printf("%.2f",avg);
	}
	return 0;
}

