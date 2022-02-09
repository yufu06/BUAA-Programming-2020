#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char num[100010];
char a[10];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		memset(num,0,100010);
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%s",a);
			num[i]=a[0];
		}
		int sum_13=0;
		int sum_11=0;
		int sum_7=0;
		int sum_3=0;
		int pos=1;
		for(i=1;i<=n;i++)
		{
			if(pos%6==1)
			{
				sum_13+=(num[i]-'0');
				sum_13%=13;
				pos++;
			}
			else if(pos%6==2)
			{
				sum_13+=(num[i]-'0')*10;
				sum_13%=13;
				pos++;
			}
			else if(pos%6==3)
			{
				sum_13+=(num[i]-'0')*100;
				sum_13%=13;
				pos++;
			}
			else if(pos%6==4)
			{
				sum_13-=(num[i]-'0');
				sum_13%=13;
				pos++;
			}
			else if(pos%6==5)
			{
				sum_13-=(num[i]-'0')*10;
				sum_13%=13;
				pos++;
			}
			else if(pos%6==0)
			{
				sum_13-=(num[i]-'0')*100;
				sum_13%=13;
				pos++;
			}
		}
		pos=1;
		for(i=1;i<=n;i++)
		{
			if(pos%6==1)
			{
				sum_11+=(num[i]-'0');
				sum_11%=11;
				pos++;
			}
			else if(pos%6==2)
			{
				sum_11+=(num[i]-'0')*10;
				sum_11%=11;
				pos++;
			}
			else if(pos%6==3)
			{
				sum_11+=(num[i]-'0')*100;
				sum_11%=11;
				pos++;
			}
			else if(pos%6==4)
			{
				sum_11-=(num[i]-'0');
				sum_11%=11;
				pos++;
			}
			else if(pos%6==5)
			{
				sum_11-=(num[i]-'0')*10;
				sum_11%=11;
				pos++;
			}
			else if(pos%6==0)
			{
				sum_11-=(num[i]-'0')*100;
				sum_11%=11;
				pos++;
			}
		}
		pos=1;
		for(i=1;i<=n;i++)
		{
			if(pos%6==1)
			{
				sum_7+=(num[i]-'0');
				sum_7%=7;
				pos++;
			}
			else if(pos%6==2)
			{
				sum_7+=(num[i]-'0')*10;
				sum_7%=7;
				pos++;
			}
			else if(pos%6==3)
			{
				sum_7+=(num[i]-'0')*100;
				sum_7%=7;
				pos++;
			}
			else if(pos%6==4)
			{
				sum_7-=(num[i]-'0');
				sum_7%=7;
				pos++;
			}
			else if(pos%6==5)
			{
				sum_7-=(num[i]-'0')*10;
				sum_7%=7;
				pos++;
			}
			else if(pos%6==0)
			{
				sum_7-=(num[i]-'0')*100;
				sum_7%=7;
				pos++;
			}
		}
		for(i=1;i<=n;i++)
		{
			sum_3+=(num[i]-'0');
			sum_3%=3;
		}
		if((num[1]-'0')%2==0)
		{
			printf("Smash it with 2!\n");
		}
		else if(sum_3%3==0)
		{
			printf("Smash it with 3!\n");
		}
		else if((num[1]-'0')%5==0)
		{
			printf("Smash it with 5!\n");
		}
		else if(sum_7==0)
		{
			printf("Smash it with 7!\n");
		}
		else if(sum_11%11==0)
		{
			printf("Smash it with 11!\n");
		}
		else if(sum_13%13==0)
		{
			printf("Smash it with 13!\n");
		}
		else
		{
			printf("qwq\n");
		}
	}
	
	return 0;
}

