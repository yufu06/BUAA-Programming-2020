#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n,x;
	int upp,i;
	scanf("%d%d",&n,&x);
	upp=1<<n;
	for(i=0;i<upp;i++)
	{
		if((i&x)==i)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	for(i=0;i<upp;i++)
	{
		if((i&x)==x)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

