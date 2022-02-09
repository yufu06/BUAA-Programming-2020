#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[110][110];
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	double std;
	scanf("%lf",&std);
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int cnt=0;   //记录不合格流水线数 
	int cnt_1;
	int cnt_2=0; //记录加糖流水线数 
	int cnt_3=0; //记录夹生流水线数
	double rate;
	for(i=1;i<=m;i++)
	{
		cnt_1=0;
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==2)
			{
				cnt++;
				cnt_2++;
				cnt_1=0; 
				break;
			}
			else if(a[i][j]==3)
			{
				cnt++;
				cnt_3++;
				cnt_1=0;
				break;
			}
			else
			{
				cnt_1+=a[i][j];
			}
		}
		rate=1-((double)cnt_1/n);
		if(rate<std)
		{
			cnt++;
		}
	}
	rate=1-((double)cnt/m);
	if(rate>=std)
	{
		printf("your factory has produced nice zhujiao !");
	}
	else
	{
		cnt=cnt-cnt_2-cnt_3;
		if(cnt>cnt_2&&cnt>cnt_3)
		{
			printf("bad assembly lines !");
		}
		else if(cnt_2>cnt&&cnt_2>cnt_3)
		{
			printf("terribly sweet !");
		}
		else if(cnt_3>cnt&&cnt_3>cnt_2)
		{
			printf("your zhujiao are still raw !");
		}
	}
	return 0;
}

