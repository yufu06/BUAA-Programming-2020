#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int p)
{
	if(p==2)
	{
		return 1;
	}
	else
	{
		int k;
		for(k=2;k<p;k++)
		{
			if(p%k==0)
			{
				return 0;
			}
			if(k==p-1&&p%k!=0)
			{
				return 1;
			}
		}
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int cnt=0;
		if(n==1)
		{
			printf("0\n");
		}
		else if(n==2)
		{
			printf("1\n");
		}
		else
		{
			int j;
			for(j=2;j<=n;j++)
			{
				if(n%j==0&&judge(j)==1)
				{
					cnt++;
				}
			}
		}
		if(n!=1&&n!=2)
		{
			printf("%d\n",cnt);
		}
	}
	return 0;
}

