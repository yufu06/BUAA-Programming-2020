#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long num[1000010];
int main()
{
	long long temp;
	int n,m;
	scanf("%d%d",&m,&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&temp);
		num[i]=num[i-1]+temp;
	}
	int l,r;
	int result;
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		result=floor((num[r]-num[l-1])/(r-l+1));
		printf("%d\n",result);
	}
	return 0;
}

