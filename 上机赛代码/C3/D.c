#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n,i,t,a[35];
	scanf("%d",&n);
	t=1;
	for(i=1;i<=32;i++)
	{
		a[i]=n&t;
		n>>=1;
	}
	for(i=32;i>=1;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}

