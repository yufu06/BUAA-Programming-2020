#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long a[60]; //a[i]代表吃i条鱼且最后一次吃鱼数小于3的方法数
long long b[60]; //b[i]代表吃i条鱼且最后一次吃鱼数等于3的方法数
int main()
{
	a[1]=1;
	a[2]=2;
	a[3]=3;
	b[1]=b[2]=0;
	b[3]=1;
	int i;
	for(i=4;i<=50;i++)
	{
		a[i]=a[i-1]+a[i-2]+b[i-1]+b[i-2];
		b[i]=a[i-3];
	}
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%lld\n",a[n]+b[n]);
	} 
	return 0;
}

