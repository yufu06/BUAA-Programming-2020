#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int a[6];
int b[6];
int main()
{
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		scanf("%d",&b[i]);
	}
	int cnt=0;
	for(i=0;i<6;i++)
	{
		if(a[i]==b[i])
		{
			cnt+=1;
		}
	}
	printf("%d",cnt);
	return 0;
}

