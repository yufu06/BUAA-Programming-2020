#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int x)
{
	int sum=0;
	int pro=1;
	int temp;
	while(x!=0)
	{
		temp=x%10;
		sum+=temp;
		pro*=temp;
		x=(x-temp)/10;
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
int a[3000010];
int main()
{
	int i;
	a[0]=0;
	for(i=1;i<=3000000;i++)
	{
		a[i]=a[i-1]+judge(i);
	}
	int t;
	scanf("%d",&t);
	int j;
	int l,r;
	for(j=0;j<t;j++)
	{
		scanf("%d%d",&l,&r);
		if(a[r]-a[l-1]==0)
		{
			printf("404 Not Found\n");
		}
		else
		{
			printf("%d\n",a[r]-a[l-1]);
		}
	}
	return 0;
}

