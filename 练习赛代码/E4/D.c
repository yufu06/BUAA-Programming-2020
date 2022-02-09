#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void rev(char a[])
{
	int l,r;
	l=0;
	r=strlen(a)-1;
	int hold;
	while(l<r)
	{
		hold=a[l];
		a[l]=a[r];
		a[r]=hold;
		l++;
		r--;
	}
	
}

void red(char a[],char b[])
{
	int i=0;
	for(i=0;i<strlen(b);i++)
	{
		if(b[i]!='0')
		{
			strcat(a,b+i);
			break;
		}
	}
	if(strlen(a)==0)
	{
		a[0]='0';
	}
}


char num[20][30];
char prf[20][30];
char temp1[30];
char temp2[30];
char temp3[30];


int main()
{
	int j=0;
	int pos=0;
	while(gets(num[j])!=NULL)
	{
		int k;
		for(k=0;k<strlen(num[j]);k++)
		{
			if(k!=strlen(num[j])-1&&num[j][k]>='0'&&num[j][k]<='9')
			{
				temp1[pos]=num[j][k];
				pos++;
			}
			else if(num[j][k]=='/'||num[j][k]=='.'||num[j][k]=='%')
			{
				red(temp2,temp1);
				rev(temp2);
				red(temp3,temp2);
				strcat(prf[j],temp3);
				int len=strlen(prf[j]);
				prf[j][len]=num[j][k];
				memset(temp1,0,30);
				memset(temp2,0,30);
				memset(temp3,0,30);
				pos=0;
			}
			else if(k==strlen(num[j])-1&&num[j][k]>='0'&&num[j][k]<='9')
			{
				temp1[pos]=num[j][k];
				red(temp2,temp1);
				rev(temp2);
				red(temp3,temp2);
				strcat(prf[j],temp3);
				memset(temp1,0,30);
				memset(temp2,0,30);
				memset(temp3,0,30);
				pos=0;
			}
		}
		puts(prf[j]);
		j++;
	}
	
	return 0;
}
