#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int x[1010];
int y[1010];
int X[60];
int Y[60];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&X[i],&Y[i]);
	}
	int j;
	long long sum=0;
	long long min;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			temp=((x[i]-X[j])*(x[i]-X[j])+(y[i]-Y[j])*(y[i]-Y[j]));
			if(j==0)
			{
				min=temp;
			}
			else
			{
				if(temp<min)
				{
					min=temp;
				}
			}
		}
		sum+=min;
	}
	printf("%lld",sum);
	return 0;
}

