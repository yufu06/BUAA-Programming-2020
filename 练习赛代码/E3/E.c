#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int len[110];
int main()
{
	int l,n;
	scanf("%d%d",&l,&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&len[i]);
	}
	int cnt=1;
	int ans=0;
	for(i=1;i<=n;i++)
	{
		ans+=len[i];
		if(ans>l)
		{
			cnt+=2;
			ans=0;
		}
		else if(ans==l)
		{
			if(i!=1&&i!=n)
			{
				cnt++;
				ans=0;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

