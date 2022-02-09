#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[60];
char b[60];
int main()
{
	scanf("%s",a);
	scanf("%s",b);
	int len;
	len=strlen(a);
	int i;
	int cnt=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==b[i])
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}

