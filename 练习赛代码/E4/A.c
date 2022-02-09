#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int);
int color[20010];
int main()
{
	int n;
	scanf("%d",&n);
	int l,r;
	int i;
	int j;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&l,&r);
		for(j=l;j<=r;j++)
		{
			if(color[j]==0&&judge(j)==1)
			{
				printf("%d ",j);
				color[j]=1;
			}
		}
		printf("\n");
	}
	return 0;
}
int judge(int i)
{
	int cnt=0;
	if(i==0)
	{
		return 0;
	}
	else
	{
		int temp;
		int ii=i;
		while(ii!=0)
		{
			temp=ii%10;
			if(temp==2||temp==0||temp==7||temp==3)
			{
				cnt++;
			}
			ii=(ii-ii%10)/10;
		}
		if(cnt==2||cnt==0||cnt==7||cnt==3)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
