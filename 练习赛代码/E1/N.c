#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char get[20];
int num[20];
int main()
{
	while(gets(get)!=NULL)
	{
		int len;
		len=strlen(get);
		int pos=0;
		int i;
		for(i=0;i<len;i++)
		{
			if(get[i]>='0'&&get[i]<='9')
			{
				num[pos]=get[i]-'0';
				pos++;
			}
		}
		int sum=0;
		for(i=0;i<9;i++)
		{
			sum+=(i+1)*num[i];
		}
		if((num[9]-sum)%11==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		memset(get,0,20);
		int j;
		for(j=0;j<10;j++)
		{
			num[j]=0;
		}
	}
	return 0;
}

