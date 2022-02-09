#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int num[40];
int main()
{
	int temp=1;
	int i;
	int tar;
	int h;
	scanf("%d%d",&tar,&h);
	int cnt=0;
	for(i=1;i<=32;i++)
	{
		num[i]=h&temp;
		h>>=1;
	}
	for(i=1;i<=32;i++)
	{
		if(num[i]==0)
		{
			cnt++;
		}
	}
	if(cnt==tar)
	{
		printf("coins++");
	}
	else
	{
		printf("continue to work hard");
	}
	return 0;
}

