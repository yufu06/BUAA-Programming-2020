#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a_1;
	int a_2;
	int a_n;
	int a_n1;
	int a1;
	int a2;
	int a3;
	scanf("%d%d",&a1,&a2);
	a_1=a1;
	a_2=a2;
	int i;
	int temp;
	int cnt=0;
	long long sum=0;
	int flag=0;
	for(i=1;i<=n-2;i++)
	{
		scanf("%d",&temp);
		if(flag==0)
		{
			flag=1;
			a3=temp;
			if(a2>a1&&a2>a3)
			{
				cnt++;
				sum+=a2;
			}
		}
		else
		{
			a1=a2;
			a2=a3;
			a3=temp;
			if(a2>a1&&a2>a3)
			{
				cnt++;
				sum+=a2;
			}
		}
		if(i==n-3)
		{
			a_n1;
			a_n1=temp;
		}
		if(i==n-2)
		{
			a_n=temp;
		}
	}
	if(a_1>a_2&&a_1>a_n)
	{
		cnt++;
		sum+=a_1;
	}
	if(a_n>a_1&&a_n>a_n1)
	{
		cnt++;
		sum+=a_n;
	}
	printf("%d %lld",cnt,sum);
	return 0;
}

