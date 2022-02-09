#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char sign[110];
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int j;
	int data;
	for(i=0;i<t;i++)
	{
		scanf("%d",&data);
		int flag=0;
		scanf("%s",sign);
		for(j=0;j<strlen(sign)-1;j++)
		{
			if(sign[j]==sign[j+1])
			{
				flag=1;
			}
			if(sign[strlen(sign)-1]=='*')
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			printf("CE\n");
		}
		else if(flag==0&&sign[0]=='&')
		{
			printf("Address\n");
		}
		else if(flag==0&&sign[0]=='*')
		{
			printf("%d\n",data);
		}
		for(j=0;j<strlen(sign);j++)
		{
			sign[j]='\0';
		}
	}
	return 0;
}

