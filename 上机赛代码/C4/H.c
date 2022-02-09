#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int x,y,t;
	int a[3],now;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		a[0]=a[1]=a[2]=y;
		now=0;
		while(1)
		{
			if(a[0]>=x&&a[1]>=x&&a[2]>=x) break;
			now++;
			if(now%3==1)
				a[0]=a[1]+a[2]-1;
			else if(now%3==2)
				a[1]=a[0]+a[2]-1;
			else
				a[2]=a[0]+a[1]-1;
		}
		printf("%d\n",now);
	}
	return 0;
}

