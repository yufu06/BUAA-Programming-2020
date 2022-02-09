#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char word[110][30];
char echo[110][30];

int main()
{
	int i=0;
	while(gets(word[i])!=NULL)
	{
		int len;
		len=strlen(word[i]);
		int lenn;
		if(i==0)
		{
			lenn=50;
		}
		else
		{
			lenn=strlen(word[i-1]);
		}
		int flag1=30;
		int a;
		for(a=0;a<len;a++)
		{
			if(word[i][a]=='+')
			{
				flag1=a;
				break;
			}
		}
		int flag2=-1;
		int b;
		for(b=len-1;b>=0;b--)
		{
			if(word[i][b]=='=')
			{
				flag2=b;
				break;
			}
		}
		
		int flag3=0;
		if(word[i][len-1]=='\\')
		{
			flag3=1;
		}
		
		int cnt=0;
		if(i==0)
		{
			cnt=50;
		}
		else
		{
			int c;
			for(c=0;c<len;c++)
			{
				if(word[i][c]==word[i-1][c])
				{
					cnt+=1;
				}
			}
		}
		
		int flag4=0;
		int flag5=0;
		int d;
		for(d=0;d<len;d++)
		{
			if(word[i][d]>='A'&&word[i][d]<='Z')
			{
				flag4=1;
				flag5=1;
			}
			if(word[i][d]>='a'&&word[i][d]<='z')
			{
				flag4=1;
			}
		}
		
		if(strcmp(word[i],"Yahoo!")==0)
		{
			strcpy(echo[i],"Yahuu!");
		}
		
		else if(flag1<flag2)
		{
			strcpy(echo[i],"......");
		}
		
		else if(flag3==1)
		{
			if(i==0)
			{
				strcpy(echo[i],word[i]);
				echo[i][len-1]='\0';
			}
			else
			{
				strcpy(echo[i],word[i-1]);
				strcat(echo[i],word[i]);
				int lennn;
				lennn=strlen(echo[i]);
				echo[i][lennn-1]='\0';
			}
		}
		
		else if((cnt==len||cnt==len-1)&&(len==lenn))
		{
			strcpy(echo[i],"Repeat:");
			strcat(echo[i],word[i-1]);
		}
		
		else if(flag4==1&&flag5==0)
		{
			strcpy(echo[i],"\\");
			strcat(echo[i],word[i]);
			strcat(echo[i],"/");
			int e;
			for(e=1;e<len+1;e++)
			{
				if(echo[i][e]>='a'&&echo[i][e]<='z')
				{
					echo[i][e]-=32;
				}
			}
		}
		
		else
		{
			strcpy(echo[i],word[i]);
		}
		
		
		i++;
	}
	
	int f;
	for(f=i-1;f>=0;f--)
	{
		puts(echo[f]);
	}
	
	
	return 0;
}
