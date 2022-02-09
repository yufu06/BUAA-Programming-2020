#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int mark[4]={0},count=-1;
long long output[3];

void get_t(long long x)
{
	int n1=x%10;
	if(n1==0)
	{
		return;
	}
	else
	{
		if(mark[n1]==0)
		{
			mark[n1]=1;
			output[++count]=x/10*10;
			if(count==2) return;
		}
		get_t(x/10);
	}
}


int main()
{
	long long x;
	int i;
	scanf("%lld",&x);
	if(x%10==0)
		printf("%lld\n%lld\n%lld",x+1,x+2,x+3);
	else
	{
		get_t(x);
		for(i=count;i>=0;i--) printf("%lld\n",output[i]);
	} 
	return 0;
}

