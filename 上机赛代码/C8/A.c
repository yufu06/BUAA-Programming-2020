#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum;
	int temp;
	while(n!=0)
	{
		sum+=n%10;
		n=(n-n%10)/10;
	}
	printf("%d",sum);
	return 0;
}

