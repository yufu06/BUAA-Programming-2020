#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char num[][30];
char result[30];
char temp[30];
int main()
{
	int i=0;
	while(gets(num[++i])!=NULL)
	{
		memset(result,0,sizeof(result));
		memset(temp,0,sizeof(temp));
		int len;
		len=strlen(num[i]);
		int j;
		int pos=0;
		for(j=0;j<len;j++)
		{
			if(num[i][j]>='0'&&num[i][j]<='9')
			{
				
			}
		}
	}
	return 0;
}

