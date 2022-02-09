#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	double sum=0;
	int i;
	for(i=1;i<=10000;i++)
	{
		sum+=(1.0/pow(i,3));
	}
	printf("%.7f",sum);
	return 0;
}

