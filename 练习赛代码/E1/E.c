#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf("%d",&x);
	int p;
	int flag=0;
	for(p=2;p<x;p++)
	{
		if(x%p==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

