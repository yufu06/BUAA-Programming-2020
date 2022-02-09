#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			return -1;
		}
	}
	return 1;
}
char a[10010];
int num[10010];
char result[10010];
int main()
{
	int T;
	scanf("%d",&T);
	int q;
	for(q=0;q<T;q++) 
	{
		scanf("%s",a);
		int len_a;
		len_a=strlen(a);
		int k;
		for(k=2;k<=9;k++)
		{
			memset(result,0,sizeof(result));
			int i;
			for(i=0;i<len_a;i++)
			{
				num[i]=a[i]-'0';
			}
			int temp;
			while(judge(num,len_a)==-1)
			{
				int r=0;
				for(i=0;i<len_a;i++)
				{
					temp=(num[i]+10*r)%k;
					num[i]=(num[i]+r*10)/k;
					r=temp;
				}
				result[strlen(result)]=r+'0';
			}
			int len_result;
			len_result=strlen(result);
			for(i=len_result-1;i>=0;i--)
			{
				printf("%c",result[i]);
			}
			printf("\n");
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}

