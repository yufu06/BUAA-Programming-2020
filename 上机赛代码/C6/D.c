#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
save[1010][20010];
int main()
{
	int max_len=0;
	int now_len;
	int i=0;
	while(gets(save[i])!=NULL)
	{
		now_len=strlen(save[i]);
		max_len=(now_len>max_len)?now_len:max_len;
		i++;
	}
	printf("%d\n",max_len);
	int j;
	for(j=i-1;j>=0;j--)
	{
		now_len=strlen(save[j]);
		if(now_len==max_len)
		{
			puts(save[j]);
		}
	}
	return 0;
}

