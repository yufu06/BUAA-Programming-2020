#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define PI 3.1415926
double a[10010];
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]); 
	}
	int max_flag=1;
	int min_flag=1;
	double max=a[1];
	double min=a[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_flag=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			min_flag=i;
		}
	}
	double mid;
	mid=(max+min)/2;
	a[max_flag]=a[min_flag]=mid;
	min=a[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	double v;
	v=PI*pow(r,2)*min;
	printf("%.4f",v);
	return 0;
}

