#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int l,r;
	scanf("%d%d",&l,&r);
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i*j<l||i*j>r)
			{
				printf("%d * %d = %d ",j,i,j*i);
			}
			if(j==i)
			{
				printf("\n");
			}
		}
	}
	return 0;
}

