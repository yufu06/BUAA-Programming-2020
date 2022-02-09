#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[1010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]>=a[1]&&a[i]>=a[n])
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

