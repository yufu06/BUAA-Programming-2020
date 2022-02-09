#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n>=m)
	{
		printf("Wow! Delicious^_^");
	}
	else
	{
		printf("%d",m-n);
	}
	return 0;
}

