#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char pat[1000][1000];
void d1(int y,int x,int a,int b,char c)
{
	if(a<=0||b<=0)
	{
		return;
	}
	int i=0;
	for(i=0;i<a;i++)
	{
		pat[y][x+i]=c;
		pat[y+b-1][x+i]=c;
	}
	for(i=0;i<b;i++)
	{
		pat[y+i][x]=c;
		pat[y+i][x+a-1]=c;
	}
	d1(y+1,x+1,a-2,b-2,c+1);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			pat[i][j]=' ';
		}
	}
	int t,y,x;
	while(scanf("%d%d%d",&t,&y,&x)!=EOF)
	{
		if(t==1)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			d1(y,x,a,b,'A');
		}
		else if(t==2)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			int i,j;
			for(i=y;i<=y+b-1;i++)
			{
				for(j=x;j<=x+a-1;j++)
				{
					pat[i][j]=c;
				}
			}
		}
		else if(t==3)
		{
			pat[y][x]=pat[y+2][x+2]='/';
			pat[y+2][x]=pat[y][x+2]='\\';
			pat[y][x+1]=pat[y+2][x+1]='-';
			pat[y+1][x]=pat[y+1][x+2]='|';
			pat[y+1][x+1]='O';
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}
	return 0;
}

