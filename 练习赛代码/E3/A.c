#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long a;
	scanf("%lld",&a);
	long long r;
	r=(a^114514)>>2;
	printf("%lld\n",r);
	if(((r+521)&1)>0)
	{
		printf("I can see the hint\n");
	}
	else
	{
		printf("HINT!\n");
	}
	return 0;
}

