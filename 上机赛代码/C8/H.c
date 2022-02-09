#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	int i;
	unsigned long long a,b;
	for(i=0;i<T;i++)
	{
		scanf("%llu%llu",&a,&b);
		if(b==0)
		{
			printf("Here's where the parade begins!\n");
		}
		else if(a*b/b==a)
		{
			printf("Here's where the parade begins!\n");
		}
		else
		{
			printf("But it is the same for mudulo 2^64.\n");
		}
	}
	return 0;
}

