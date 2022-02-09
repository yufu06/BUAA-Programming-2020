#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	int a[300];
	int m=0;
	long long sumALL=0,sumGroup=0;
	int i,j;
	int num=1;
	scanf("%d",&n);
	while(scanf("%d",&a[m])!=EOF)
	{
		sumALL+=a[m];
		m++;
	}
	for(i=m-1;i>=0;i-=n)
	{
		if(i+1<n)
		{
			printf("out of range\n");
			for(j=i;j>=0;j--) printf("%d\n",a[j]);
		}
		else
		{
			sumGroup=0;
			for(j=i;j>i-n;j--) sumGroup+=a[j];
			if(sumGroup*m>=sumALL*n)
			{
				printf("Group:%d\n",num);
				for(j=i;j>i-n;j--) printf("%d\n",a[j]);
			}
			num++;
		}
	}
	return 0;
}
