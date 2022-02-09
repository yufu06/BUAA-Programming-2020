#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MaxInt 2147483647
int array[1000005];
int main()
{
	int ans=0,max=0,min=MaxInt,a,b;
	int N,temp,flag,position=0,i,ans1;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		temp=array[i];
		ans=ans^temp;
		if(temp>max) max=temp;
		if(temp<min) min=temp;
	}
	if(ans==0&&(N&1)==0)
	{
		printf("%d %d",min,max);
	}
	else if((N&1)==1)
	{
		printf("1 %d",ans);
	}
	else
	{
		ans1=ans;
		while((ans&1)==0)
		{
			ans=ans>>1;
			position++;
		}
		for(i=0;i<N;i++)
		{
			if((array[i]>>position)&1==1)
			{
				a=a^array[i];
			}
		}
		b=a^ans1;
		printf("2 %lld",(long long)a*(long long)b);
	}
	return 0;
}

