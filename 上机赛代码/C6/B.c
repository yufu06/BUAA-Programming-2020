#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int x[110];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	int max=x[0];
	int min=x[0];
	double ave=0;
	double var=0;
	for(i=0;i<n;i++)
	{
		max=(x[i]>max)?x[i]:max;
		min=(x[i]<min)?x[i]:min;
		ave+=(double)x[i]/n;
	}
	for(i=0;i<n;i++)
	{
		var+=((x[i]-ave)*(x[i]-ave))/n;
	}
	printf("%-5d%-5d%-8.2f%-10.2f",max,min,ave,var);
	return 0;
}

