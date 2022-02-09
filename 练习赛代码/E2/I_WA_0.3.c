#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int r[100010][3]; //第一列0代表未出现过 1代表出现过
				  //第二列记录出现的顺序
char result[100010];
void i_to_a(int i, char a[],int k) //i为十进制数，k为转化后的进制 
{
	if(i==0)
	{
		a[0]='0';
		return;
	}
	else
	{
		while(i!=0)
		{
			a[strlen(a)]=(i%k)+'0';
			i=(i-i%k)/k;
		}
		int len;
		len=strlen(a);
		char hold;
		int l=0,r=len-1;
		while(l<r)
		{
			hold=a[l];
			a[l]=a[r];
			a[r]=hold;
			l++;
			r--;
		}
		return;
	}
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int z=y;
	for(;z%2==0;z/=2);
	for(;z%5==0;z/=5);
	if(x%y==0)
	{
		printf("integer\n%d",x/y);
	}
	else if(z==1)
	{
		printf("terminating decimal\n");
		i_to_a(0,result,10);
		result[strlen(result)]='.';
		x=x-x/y;
		int temp;
		int cnt=0;
		while(x!=0)
		{
			x*=10;
			result[strlen(result)]=x/y+'0';
			x%=y;
		}
		puts(result);
	}
	else
	{
		printf("recurring decimal\n");
		i_to_a(0,result,10);
		result[strlen(result)]='.';
		x=x-x/y;
		int temp;
		int cnt=0;
		while(r[x][0]==0)
		{
			x*=10;
			result[strlen(result)]=x/y+'0';
			x%=y;
			if(r[x][0]==0)
			{
				r[x][0]=1;
				r[x][1]=++cnt;
			}
			else if(r[x][0]==1)
			{
				cnt=strlen(result)-r[x][1]-2;
				result[strlen(result)+1]='\0';
				break;
			}
		}
		int i;
		for(i=0;i<strlen(result);i++)
		{
			if(i==strlen(result)-cnt+1)
			{
				printf("_");
			}
			printf("%c",result[i]);
		}
		printf(" [%d]",cnt);
	}
	return 0;
}
