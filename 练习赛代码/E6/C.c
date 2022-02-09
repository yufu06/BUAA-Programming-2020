#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[10];
char arr[210];
char brr[210];
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		memset(a,0,sizeof(a));
		memset(arr,0,sizeof(arr));
		memset(brr,0,sizeof(brr));
		scanf("%s",a);
		if(strcmp(a,"len")==0)
		{
			scanf("%s",arr);
			printf("%d\n",strlen(arr));
		}
		else if(strcmp(a,"cmp")==0)
		{
			scanf("%s%s",arr,brr);
			if(strcmp(arr,brr)>0)
			{
				printf(">\n");
			}
			else if(strcmp(arr,brr)<0)
			{
				printf("<\n");
			}
			else
			{
				printf("=\n");
			}
		}
		else if(strcmp(a,"cat")==0)
		{
			int n;
			scanf("%s%s%d",arr,brr,&n);
			strncat(arr,brr,n);
			printf("%s\n",arr);
		}
	}
	return 0;
}

