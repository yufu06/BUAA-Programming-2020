#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double sum=0;
	double x;
	for(i=0;i<n;i++)
	{
		 scanf("%lf",&x);
		 sum+=(x-(int)x);
	}
	printf("%.2f",sum);
	return 0;
}

