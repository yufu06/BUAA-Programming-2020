#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int td[50];
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int l,r;
	for(i=1;i<=48;i++)
	{
		td[i]=1;
	}
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&l,&r);
		int j;
		for(j=l;j<=r;j++)
		{
			td[j]=0;
		}
	}
	int cnt=0;
	int j;
	for(j=1;j<=48;j++)
	{
		cnt+=td[j];
	}
	printf("%d",cnt);
	return 0;
}

