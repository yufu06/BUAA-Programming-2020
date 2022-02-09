#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int judge(int,int);
int main()
{
	int p,q;
	scanf("%d%d",&p,&q);
	int n;
	n=p*q;
	int fai;
	fai=(p-1)*(q-1);
	int i,j;
	for(i=2;i<fai;i++)
	{
		if(judge(i,fai)==0)
		{
			for(j=2;j<fai;j++)
			{
				if((i*j-1)%fai==0)
				{
					printf("(%d,%d),(%d,%d)\n",n,i,n,j);
				}
			}
		}
	}
	return 0;
}
int judge(int p,int q)
{
	int gcd;
	gcd=(p<=q)?p:q;
	for(;gcd>=1;gcd--)
	{
		if(p%gcd==0&&q%gcd==0)
		{
			break;
		}
	}
	if(gcd==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
