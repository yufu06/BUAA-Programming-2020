#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[1010];
char b[1010];
char s_max[1010];
char s_min[1010];
char word[2010];
int main()
{
	gets(a);
	gets(b);
	int n;
	scanf("%d",&n);
	int len_a;
	int len_b;
	int max_len;
	int min_len;
	len_a=strlen(a);
	len_b=strlen(b);
	if(len_a>len_b)
	{
		strcat(s_max,a);
		strcat(s_min,b);
	}
	else if(len_b>len_a)
	{
		strcat(s_max,b);
		strcat(s_min,a);
	}
	max_len=strlen(s_max);
	min_len=strlen(s_min);
	int i;
	for(i=0;i<=n;i++)
	{
		word[i]=s_max[i];
	}
	strcat(word,s_min);
	for(i=n+min_len+1;i<max_len+min_len;i++)
	{
		word[i]=s_max[i-min_len];
	}
	puts(word);
	
	
	return 0;
}

