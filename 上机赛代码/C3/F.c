#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[20];
int main()
{
	int n,i,j,t;
	int cnt; 
	long long temp;
	scanf("%d",&t);
	long long sum;
	for(j=0;j<t;j++)
	{
		cnt=0;
		temp=1;
		memset(a,0,20);
		sum=0;
		scanf("%d",&n);
		for(i=1;i<=14;i++)
		{
			a[i]=n&1;
			n>>=1;
		}
		for(i=1;i<=7;i++)
		{
			if(a[i]==1)
			{
				cnt++;
			}
		}
		if(cnt%2==1)
		{
			for(i=14;i>=1;i--)
			{
				sum+=(a[i]*temp);
				temp*=2;
			}
			printf("%lld\n",sum);
		}
		else
		{
			for(i=1;i<=14;i++)
			{
				sum+=(a[i]*temp);
				temp*=2;
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}

