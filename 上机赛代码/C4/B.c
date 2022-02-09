#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n,m;
	int i,j;
	double temp;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				temp=(double)j/100;
				printf("%.4f ",pow(1+temp,i));
				if(j==m)
				{
					printf("\n");
				}
			}
		}
	}
	return 0;
}

