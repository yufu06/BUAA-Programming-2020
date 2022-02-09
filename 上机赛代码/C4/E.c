#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[110];
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		memset(a,0,110);
		int n;
		scanf("%d",&n);
		int j;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
		}
		int num=0;
		int max=0;
		int pos=0;
		for(j=1;j<=n;j++)
		{
			if(a[j]==1)
			{
				//1 1 0 1 1 0 1 1 0 
				//4 5
				num++;
				if(j==n&&num>max)
				{
					max=num;
					pos=j-num+1;
					num=0;
				}
			}
			else if(a[j]==0)
			{
				if(num>max)
				{
					max=num;
					pos=j-num;
				}
				num=0;
			}
		}
		printf("%d %d\n",max,pos);
	}
	return 0;
}

