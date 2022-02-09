#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long a[5010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	int j;
	int cnt=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((a[i]&a[j])>(a[i]^a[j]))
			{
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

