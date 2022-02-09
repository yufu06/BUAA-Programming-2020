#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char std[][15]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
char num[10];
int main()
{
	gets(num);
	int len;
	len=strlen(num);
	int i;
	for(i=0;i<len;i++)
	{
		if(num[i]=='-')
		{
			printf("fu ");
		}
		else if(num[i]=='.')
		{
			printf("dian ");
		}
		else
		{
			printf("%s ",std[num[i]-'0']);
		}
	}
	return 0;
}

