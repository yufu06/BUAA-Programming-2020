#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[110];
int main()
{
	int n,q;
	int temp;
	int s,t;
	int flag=-1;
	scanf("%d%d",&n,&q);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	int k;
	for(j=1;j<=q;j++)
	{
		scanf("%d",&temp);
		if(temp==1)
		{
			scanf("%d%d",&s,&t);
			a[s]=t;
			for(k=1;k<=n;k++)
			{
				if(a[k]==-1)
				{
					break;
				}
				if(k==n&&a[k]!=-1&&flag==-1)
				{
					flag=1;
				}
			}
		}
		else if(temp==2)
		{
			scanf("%d%d",&s,&t);
			a[s]=t;
			for(k=1;k<=n;k++)
			{
				if(a[k]==-1)
				{
					break;
				}
				if(k==n&&a[k]!=-1&&flag==-1)
				{
					flag=2;
				}
			}
		}
	}
	printf("%d\n",flag);
	if(flag!=-1)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}

