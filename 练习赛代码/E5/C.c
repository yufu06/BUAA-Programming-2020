#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int temp1[1010];
int temp2[1010];
int temp3[1010];
int temp4[1010];
int temp5[1010];
int f1(int x)
{
	return x*2+1;
}
int f2(int x)
{
	return x/2-1;
}
int f3(int x)
{
	return x<<2;
}
int f4(int x)
{
	return x>>2;
}
int f5(int x)
{
	return x&2;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp1[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp2[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp3[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp4[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp5[i]);
	}
	int j;
	for(i=0;i<n;i++)
	{
		printf("%d ",f1(temp1[i]));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",f2(temp2[i]));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",f3(temp3[i]));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",f4(temp4[i]));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",f5(temp5[i]));
	}
	printf("\n");
	return 0;
}

