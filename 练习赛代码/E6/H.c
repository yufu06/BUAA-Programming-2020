#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int num[1000010];
int main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	int j;
	int tag;
	int l,r,mid;
	for(j=0;j<t;j++)
	{
		scanf("%d",&tag);
		l=1,r=n;
		while(l<=r)
		{
			if(num[l]==tag)
			{
				printf("true\n");
				break;
			}
			else if(num[r]==tag)
			{
				printf("true\n");
				break;
			}
			else
			{
				mid=(l+r)/2;
				if(tag==num[mid])
				{
					printf("true\n");
					break;
				}
				else if(tag<num[mid])
				{
					r=mid-1;
				}
				else if(tag>num[mid])
				{
					l=mid+1;
				}
			}
		}
		if(l>r)
		{
			printf("false\n");
		}
	}
	return 0;
}

