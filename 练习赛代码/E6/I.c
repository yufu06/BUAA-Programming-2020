#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char name[110][110];
char temp[110];
void change(char a[],char b[])
{
	strcat(temp,a);
	memset(a,0,sizeof(a));
	strcat(a,b);
	memset(b,0,sizeof(b));
	strcat(b,temp);
	memset(temp,0,sizeof(temp));
}
int judge(char a[],char b[])
{
	if(strlen(a)>strlen(b))
	{
		return -1;
	}
	else if(strlen(a)<strlen(b))
	{
		return 1;
	}
	else
	{
		int k;
		for(k=0;k<strlen(a);k++)
		{
			if(a[k]==b[k])
			{
				continue;
			}
			if(b[k]=='6')
			{
				return -1;
			}
			else if(a[k]=='6')
			{
				return 1;
			}
			else if(b[k]>a[k])
			{
				return -1;
			}
			else if(a[k]>b[k])
			{
				return 1;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(judge(name[j],name[j+1])==-1)
			{
				change(name[j],name[j+1]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		puts(name[i]);
	}
	return 0;
}

