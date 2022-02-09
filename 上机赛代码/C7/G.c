#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MOD (299213)
long long mtx_initial[100][100];
long long mtx[100][100];
long long temp[100][100];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%lld",&mtx_initial[i][j]);
			mtx_initial[i][j]%=MOD;
		}
	}
	for(i=1;i<=n;i++)
	{
		mtx[i][i]=1;
	}
	int cnt;
	for(cnt=1;cnt<=k;cnt++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				mtx[i][j]%=MOD;
				temp[i][j]=mtx[i][j];
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				long long sum=0;
				int d;
				for(d=1;d<=n;d++)
				{
					temp[i][d]%=MOD;
					temp[d][j]%=MOD;
					sum+=(temp[i][d]*mtx_initial[d][j]);
					sum%=MOD;
				}
				mtx[i][j]=sum;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%lld ",mtx[i][j]);
		}
		printf("\n");
	}
	return 0;
}

