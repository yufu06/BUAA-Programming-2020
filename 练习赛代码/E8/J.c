#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char num[][15]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
char get[20];
int main()
{
	while(gets(get)!=NULL)
	{
		int cnt1=0,cnt2=0;  //cnt1计算整数部分位数，cnt2计算无意义后导零个数
		int len;
		len=strlen(get);
		int i;
		for(i=0;i<len;i++)
		{
			if(get[i]=='-') continue;
			else if(get[i]=='.') break;
			cnt1++;
		}
		for(i=len-1;i>=0;i--)
		{
			if(get[i]!='0') break;
			cnt2++;
		}
		for(i=0;i<len;i++)
		{
			if(get[i]=='-')	printf("fu ");
			else if(cnt1==1)
			{
				printf("%s ",num[get[i]-'0']);
				cnt1=-1;
			}
			else if(cnt1==2)
			{
				printf("%s shi ",num[get[i]-'0']);
				if(get[++i]!='0') printf("%s ",num[get[i]-'0']);
				cnt1=-1;
			}
			else if(cnt1==3)
			{
				printf("%s bai ",num[get[i]-'0']);
				if(get[++i]!='0') printf("%s shi ",num[get[i]-'0']);
				i++;
				if(get[i-1]=='0'&&get[i]!='0') printf("ling %s ",num[get[i]-'0']);
				else if(get[i-1]!='0'&&get[i]!='0') printf("%s ",num[get[i]-'0']);
				cnt1=-1;
			}
			else if((get[i]=='.')&&(i!=len-cnt2-1))
			{
				printf("dian ");
			}
			else if(len-cnt2>i) printf("%s ",num[get[i]-'0']);
		}
		memset(get,0,sizeof(get));
		puts("");
	}
	return 0;
}
