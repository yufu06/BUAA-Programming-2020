#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	long long x;
	scanf("%lld",&x);
	int flag=0;
	if(x==2||x==3)
	{
		printf("Yes\n");
	}
	else if(x==4)
	{
		printf("No\n");
	}
	else
	{
		int i;
		for(i=2;i<sqrt(x)+1;i++)
		{
			if(x%i==0)
			{
				printf("No\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("Yes\n"); 
		}
	}
	return 0;
}

