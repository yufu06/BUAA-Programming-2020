#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cnt[100];
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int temp;
	for(i=0;i<t;i++)
	{
		scanf("%d",&temp);
		cnt[temp]++;
	}
	for(i=1;i<=77;i++)
	{
		if(cnt[i]>3)
		{
			cnt[i]=3;
		}
	}
	int sum=0;
	for(i=1;i<=77;i++)
	{
		sum+=cnt[i];
	}
	printf("%d",sum);
	return 0;
}

