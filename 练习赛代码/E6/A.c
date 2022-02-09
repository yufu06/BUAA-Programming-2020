#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int k1,b1,k2,b2,k3,b3;
	while(scanf("%d%d%d%d%d%d",&k1,&b1,&k2,&b2,&k3,&b3)!=EOF)
	{
		if(k1*b2+k2*b3+k3*b1==k1*b3+k2*b1+k3*b2)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
