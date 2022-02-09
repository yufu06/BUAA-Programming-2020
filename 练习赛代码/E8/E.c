#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[20][20];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j]!=0)
				{
					printf("%d ",a[i][j]);
				}
			}
		}
		else if(i%2==0)
		{
			for(j=m;j>=1;j--)
			{
				if(a[i][j]!=0)
				{
					printf("%d ",a[i][j]);
				}
			}
		}
	}
	return 0;
}

