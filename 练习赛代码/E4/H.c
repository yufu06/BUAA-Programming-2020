#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define INF ((long long)3e18)
long long T[10];
int main()
{
	int t;
	long long n;
	long long minT=INF+1;
	int i=0,ans=0;
	scanf("%d",&t);
	while(t--)
	{
		minT=INF+1;
		i=0,ans=0;
		scanf("%lld",&n);
		if(n>1000000000)
		{
			puts("6");
		}
		else
		{
			if(n<=10000)
				T[1]=n*(n-1)*(n-2)*(n-3)/24+1; 
			else
				T[1]=INF;
			if(n<=1000000)
				T[2]=n*(n-1)*(n-2)+2;
			else
				T[2]=INF;
			T[3] = n * (n - 7) / 2 + 23333;
			T[4] = n * (long long)(floor(sqrt(n))) + 233333;
			T[5] = n * ((long long)ceil(log2(n))) + 2333333;
			T[6] = 2 * n + 19522020;
			for(i=1;i<=6;i++)
			{
				if(T[i]<minT)
				{
					ans=i;
					minT=T[i];
				}
			}
			printf("%d\n",ans);
		}
		
	}
	return 0;
}

