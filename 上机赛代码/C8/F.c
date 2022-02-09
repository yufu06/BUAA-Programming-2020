#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000][1000]={0};
int main()
{
	int n,m;
	int p,q;
	int i,j;
	int c,d;
	int avg=0;
	int sum=0;
	double temp1,temp2;
	scanf("%d%d",&n,&m);
	scanf("%d%d",&p,&q);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int s,t;
	for(s=1;s<=p;s++)
	{
		for(t=1;t<=q;t++)
		{
			temp1=(double)s*n/p;
			temp2=(double)t*m/q;
			c=floor(temp1);
			d=floor(temp2);
			sum=arr[c][d]+arr[c][d+1]+arr[c+1][d]+arr[c+1][d+1];
			avg=floor((double)sum/4);
			printf("%d ",avg);
			if(t==q)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
