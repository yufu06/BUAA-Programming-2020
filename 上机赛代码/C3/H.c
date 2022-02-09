#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char get[20010];
int num[20010];
char r[20010];
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	scanf("%s",get);
	int len;
	len=strlen(get);
	int i;
	for(i=0;i<len;i++)
	{
		if(get[i]>='0'&&get[i]<='9')
		{
			num[i]=get[i]-'0';
		}
		else if(get[i]>='A'&&get[i]<='Z')
		{
			num[i]=10+get[i]-'A';
		}
	}
	int sum=0;
	int temp=1;
	for(i=len-1;i>=0;i--)
	{
		sum+=(num[i]*temp);
		temp*=m;
	}
	int pos=0;
	while(sum!=0)
	{
		temp=sum%n;
		if(temp>=0&&temp<=9)
		{
			r[pos]='0'+temp;
			pos++;
		}
		else if(temp>=10&&temp<=35)
		{
			r[pos]='A'+temp-10;
			pos++;
		}
		sum=(sum-sum%n)/n;
	}
	int j;
	int flag;
	for(j=0;j<pos;j++)
	{
		if(r[j]!='0')
		{
			flag=j;
			break;
		}
	}
	for(j=flag;j<pos;j++)
	{
		printf("%c",r[j]);
		if(j==pos-1)
		{
			return 0;
		}
	}
	printf("0");
	return 0;
}
