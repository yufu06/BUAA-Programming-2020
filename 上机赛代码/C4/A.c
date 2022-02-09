#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[10];
int b[10];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int sum1=0;
	int sum2=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		sum1+=(a[i]*b[i]);
		sum2+=a[i];
	}
	double score;
	score=(double)sum1/sum2;
	printf("%.2f",score);
	return 0;
}

