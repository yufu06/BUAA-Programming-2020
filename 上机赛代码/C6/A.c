#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[1010];
int b[1010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	long long sum=0;
	for(i=0;i<n;i++)
	{
		sum+=(a[i]*b[i]);
	}
	printf("%lld",sum);
	return 0;
}

