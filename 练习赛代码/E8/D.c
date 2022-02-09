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
	int i;
	int temp;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		{
			if(temp==0)
			{
				cnt++;
			}
			else if(temp==1)
			{
				cnt+=2;
			}
			else if(temp==2)
			{
				cnt+=3;
			}
		}
	}
	if(cnt<50)
	{
		printf("Yes we can !");
	}
	else
	{
		printf("GUGUGU !");
	}
	return 0;
}

