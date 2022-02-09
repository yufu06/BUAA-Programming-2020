#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long a[100010];
long long b[100010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&b[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		if(a[i]>=a[i+1])
		{
			int temp;
			temp=a[i];
			a[i]=b[i];
			b[i]=temp;
		}
		else if(b[i]>=b[i+1])
		{
			int temp;
			temp=b[i];
			b[i]=a[i];
			a[i]=temp;
		}
		if((a[i]>=a[i+1])||(b[i]>=b[i+1]))
		{
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}

