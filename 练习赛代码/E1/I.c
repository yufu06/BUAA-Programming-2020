#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int cnt=0;
	int j;
	for(j=1;j<=n-1;j++)
	{
		cnt+=(n%j!=0)?floor(n/j):n/j-1;
	}
	printf("%d",cnt);
	return 0;
}

