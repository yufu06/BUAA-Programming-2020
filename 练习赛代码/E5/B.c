#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		long long sum=1;
		for(i=1;i<n;i++)
		{
			sum=(2*sum+2);
		}
		printf("%lld\n",sum);
	}
	return 0;
}

