#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int s[100000];
int main()
{
	int l,r;
	scanf("%d%d",&l,&r);
	int i;
	int sum_1=0;
	int sum_0=0;
	for(i=l;i<=r;i++)
	{
		if(i==0)
		{
			sum_0++;
			continue;
		}
		else
		{
			int j;
			j=i;
			int temp;
			int pos=0;
			while(j!=0)
			{
				temp=j%2;
				s[pos]=temp;
				pos++;
				j=(j-j%2)/2;
			}
			int k;
			for(k=0;k<pos;k++)
			{
				if(s[k]==1)
				{
					sum_1++;
				}
				else if(s[k]==0)
				{
					sum_0++;
				}
			}
		}
	}
	printf("%d %d",sum_0,sum_1);
	return 0;
}

