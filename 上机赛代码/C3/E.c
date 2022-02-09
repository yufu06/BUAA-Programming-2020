#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[1000];
int main()
{
	int k=0;
	while((a[k]=getchar())!=EOF)
	{
		k++;
	}
	int len;
	len=strlen(a);
	int max=0;
	int i,j;
	int cnt;
	int flag=0;
	for(j=0;j<len;j++)
	{
		if(a[j]>='A'&&a[j]<='Z')
		{
			a[j]+=32;
		}
	}
	for(i=0;i<26;i++)
	{
		cnt=0;
		for(j=0;j<len;j++)
		{
			if(a[j]=='a'+i)
			{
				cnt++;
			}
		}
		if(cnt>max)
		{
			max=cnt;
		}
	}
	for(i=0;i<26;i++)
	{
		cnt=0;
		for(j=0;j<len;j++)
		{
			if(a[j]=='a'+i)
			{
				cnt++;
			}
		}
		if(cnt==max)
		{
			printf("%c",'a'+i);
		}
		if(i==25)
		{
			printf("\n");
		}
	}
	int num=0;
	for(j=0;j<len;j++)
	{
		if(a[j]>='a'&&a[j]<='z')
		{
			flag=1;
			if(j==len-1)
			{
				num++;
			}
		}
		else
		{
			if(flag==1)
			{
				num++;
			}
			flag=0;
		}
	}
	printf("%d",num);
	return 0;
}

