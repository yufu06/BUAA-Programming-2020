#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
long long res[50005];
int main()
{
	long long m,a,c,seed,ans;
	int i,j,flag=0;
	scanf("%lld %lld %lld %lld",&m,&a,&c,&seed);
	for(i=0;i<50000;i++)
	{
		ans=(seed*a+c)%m;
		res[i]=ans;
		for(j=0;j<i;j++)
		{
			if(res[j]==ans)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("Duplicate found\n%lld %d",ans,i+1);
			return 0;
		}
		seed=ans;
	}
	printf("Not repeated\n%d", ans);
	return 0;
}

