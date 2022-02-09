#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int);
int flag[1010];
int main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		flag[i]=judge(i);
	}
	int t;
	int j;
	int l,r;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d%d",&l,&r);
		int cnt=0;
		for(i=l;i<=r;i++)
		{
			cnt+=flag[i];
		}
		if(cnt==0)
		{
			printf("404 Not Found\n");
		}
		else
		{
			printf("%d\n",cnt);
		}
	}
	return 0;
}
int judge(int i)
{
	int sum=0;
	int pro=1;
	while(i!=0)
	{
		sum+=(i%10);
		pro*=(i%10);
		i=(i-(i%10))/10;
	}
	if(sum>=20&&pro>=162)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

