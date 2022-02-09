#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		int j;
		for(j=0;j<n;j++)
		{
			printf("%d ",4*n-2*j);
		}
		printf("\n");
	} 
	return 0;
}

