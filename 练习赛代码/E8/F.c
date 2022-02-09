#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[20][110];
int color[40];
int main()
{
	int n;
	scanf("%d",&n);
	char k;
	k=getchar();
	int i;
	for(i=1;i<=n;i++)
	{
		int t;
		for(t=1;t<=36;t++)
		{
			color[t]=0;
		}
		gets(a[i]);
		int len;
		len=strlen(a[i]);
		int j;
		for(j=0;j<len;j++)
		{
			if(a[i][j]>='A'&&a[i][j]<='Z')
			{
				a[i][j]+=32;
			}
		}
		for(j=0;j<len;j++)
		{
			if(a[i][j]>='0'&&a[i][j]<='9')
			{
				color[a[i][j]-'0'+1]=1;
			}
			else if(a[i][j]>='a'&&a[i][j]<='z')
			{
				color[a[i][j]-'a'+11]=1;
			}
		}
		int cnt=0;
		for(t=1;t<=36;t++)
		{
			if(t>=1&&t<=10&&color[t]==0)
			{
				printf("%c ",t+'0'-1);
				cnt++;
			}
			else if(t>=11&&t<=36&&color[t]==0)
			{
				printf("%c ",t+'a'-11);
				cnt++;
			}
		}
		if(cnt==0)
		{
			printf("Zzz LOVES this keyboard!");
		}
		printf("\n");
	}
	return 0;
}

