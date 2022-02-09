#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int r[10000];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			printf("0");
		}
		int pos=0;
		while(n!=0)
		{
			int temp;
			temp=n%3;
			r[pos]=temp;
			pos++;
			n=(n-n%3)/3;
		}
		int i;
		if(pos>=5)
		{
			printf("LONG");
		}
		for(i=pos-1;i>=0;i--)
		{
			printf("%d",r[i]);
		}
		printf("\n");
	}
	return 0;
}

