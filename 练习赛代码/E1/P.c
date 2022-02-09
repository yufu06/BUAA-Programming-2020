#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf("%d",&x);
	int temp;
	int flag=0; //1代表升序，2代表降序 
	while(scanf("%d",&temp)!=EOF)
	{
		if(flag==0&&temp>x)
		{
			flag=1;
		}
		else if(flag==0&&temp<x)
		{
			flag=2;
		}
		if(flag==1)
		{
			if(temp>=x)
			{
				x=temp;
			}
			else
			{
				printf("No");
				return 0;
			}
		}
		else if(flag==2)
		{
			if(temp<=x)
			{
				x=temp;
			}
			else
			{
				printf("No");
				return 0;
			}
		}
	}
	printf("Beautiful");
	return 0;
}

