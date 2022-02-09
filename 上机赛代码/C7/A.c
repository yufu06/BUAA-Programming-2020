#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long l;
	long long n;
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		long long a1;
		long long a2;
		a1=n+5;
		double temp;
		temp=1+1.0/10000;
		a2=floor(temp*n);
		l=(a1>=a2)?a1:a2;
		printf("%lld\n",l);
		if(l*8>=(15.0/16)*67108864)
		{
			printf("Want some MLE?\n");
		}
		else
		{
			printf("Pass the Problem!!!\n");
		}
	}
	return 0;
}

