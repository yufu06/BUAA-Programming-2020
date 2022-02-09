#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int mtx1[30][30];
int mtx2[30][30];
int main()
{
	int m1,n1;
	scanf("%d%d",&m1,&n1);
	int m2,n2;
	scanf("%d%d",&m2,&n2);
	int i,j;
	for(i=1;i<=m1;i++)
	{
		for(j=1;j<=n1;j++)
		{
			scanf("%d",&mtx1[i][j]);
		}
	}
	for(i=1;i<=m2;i++)
	{
		for(j=1;j<=n2;j++)
		{
			scanf("%d",&mtx2[i][j]);
		}
	}
	int k,l;
	int sum=0;
	for(i=1;i<=m1-m2+1;i++)
	{
		for(j=1;j<=n1-n2+1;j++)
		{
			for(k=1;k<=m2;k++)
			{
				for(l=1;l<=n2;l++)
				{
					sum+=(mtx1[i+k-1][j+l-1]*mtx2[k][l]);
				} 
			}
			printf("%d ",sum);
			sum=0;
		}
		printf("\n");
	}
	return 0;
}

