#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[1000];
int main()
{
	int k;
	scanf("%d",&k);
	while(gets(a)!=NULL)
	{
		int len;
		len=strlen(a);
		int i;
		int sign1; //代表密文字母对应数字 
		int sign2;
		for(i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				sign1=a[i]-'a';
				sign2=(sign1-k)%26;
				if(sign2<0)
				{
					sign2+=26;
				}
				printf("%c",sign2+'a');
			}
			else
			{
				printf("%c",a[i]);
			}
			if(i==len-1)
			{
				printf("\n");
			}
		}
		memset(a,0,1000);
	}
	return 0;
}

