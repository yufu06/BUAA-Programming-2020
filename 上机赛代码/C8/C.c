#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int k[110];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k[i]);
	}
	int max=k[1];
	for(i=1;i<=n;i++)
	{
		if(k[i]>max)
		{
			max=k[i];
		}
	}
	int j;
	for(j=1;j<=max;j++)
	{
		int cnt=0;
		for(i=1;i<=n;i++)
		{
			if(k[i]==j)
			{
				cnt++;
			}
		}
		printf("%.2f ",(double)cnt/n);
	}
	return 0;
}

