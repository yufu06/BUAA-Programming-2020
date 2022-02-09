#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int ispalindrome(char *,int);
char word[310];
int main()
{
	gets(word);
	int i;
	int j;
	int len ;
	len=strlen(word);
	int cnt=0;
	for(i=0;i<len;i++)
	{
		for(j=2;i+j<len+1;j++)
		{
			if(ispalindrome(word+i,j)==1)
			{
				cnt++;
			}
		}
	}
	if(cnt==0)
	{
		printf("No ProbIem!\n0\n");
	}
	else
	{
		printf("DiDaRen Waring\n%d\n",cnt);
	}
	return 0;
}
int ispalindrome(char *p,int n)
{
	int i;
   	for(i=0;i<n/2;i++)
	{
		if(*(p+i)!=*(p+n-1-i)) return 0;
	}
	return 1;
}

