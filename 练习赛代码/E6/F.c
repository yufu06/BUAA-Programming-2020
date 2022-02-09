#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char num[110];
int main()
{
	gets(num+1);
	int len;
	len=strlen(num+1);
	int i;
	num[len]++;
	for(i=len;i>=1;i--)
	{
		if(num[i]=='9'+1)
		{
			num[i]='0';
			if(num[i-1]=='\0')
			{
				num[i-1]='1';
			}
			else
			{
				num[i-1]++;
			}
		}
		else
		{
			break;
		}
	}
	if(num[0]=='\0')
	{
		printf("%s",num+1);
	}
	else if(num[0]=='1');
	{
		printf("%s",num);
	}
	return 0;
}

