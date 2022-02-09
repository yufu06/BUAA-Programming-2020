#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char form[60][60];
int main()
{
	char c;
	int n;
	scanf("%c%d",&c,&n);
	int i;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j<=n-i)
			{
				form[i][j]=c;
			}
			else if(j>=n-i+1&&j<=n)
			{
				form[i][j]='A'+j-n+i-1;
			}
			else if(j>=n+1)
			{
				form[i][j]=form[i][2*n-j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			printf("%c",form[i][j]);
			if(j==2*n-1)
			{
				printf("\n");
			}
		}
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=2*n-1;j++)
		{
			printf("%c",form[i][j]);
			if(j==2*n-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}

