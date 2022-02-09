#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	
	int n;
	scanf("%d",&n);
	n&=~((1<<8)-1<<8);
	printf("%d",n);
	return 0;
}

