#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int a,b,i,j,size;
	char sa[105],sb[105];
	while(~scanf("%s%s",sa,sb))
	{
		a=0;
		b=0;
		for(i=0;i<strlen(sa);i++)
		{
			a|=1<<(sa[i]-'a');
		}
		for(i=0;i<strlen(sb);i++)
		{
			b|=1<<(sb[i]-'a');
		}
		for(i=0;i<26;i++)
		{
			if(a&(1<<i))
			{
				putchar(i+'a');
			}
		}
		putchar('\n');
		for(i=0;i<26;i++)
		{
			if(b&(1<<i))
			{
				putchar(i+'a');
			}
		}
		putchar('\n');
		for(i=0;i<26;i++)
		{
			if((a&b)&(1<<i))
			{
				putchar(i+'a');
			}
		}
		putchar('\n');
		for(i=0;i<26;i++)
		{
			if((a|b)&(1<<i))
			{
				putchar(i+'a');
			}
		}
		putchar('\n');
		for(i=0;i<26;i++)
		{
			if((a^b)&(1<<i))
			{
				putchar(i+'a');
			}
		}
		putchar('\n');
	}
	return 0;
}

