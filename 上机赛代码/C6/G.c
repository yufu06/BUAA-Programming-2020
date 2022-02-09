#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char bark[1010]; 
int main()
{
	while(gets(bark)!=NULL)
	{
		int len;
		len=strlen(bark);
		int i;
		int cnt=0;
		for(i=0;i<len-3;i++)
		{
			if((bark[i]=='W'||bark[i]=='w')&&(bark[i+1]=='O'||bark[i+1]=='o')&&(bark[i+2]=='O'||bark[i+2]=='o')&&(bark[i+3]=='F'||bark[i+3]=='f'))
			{
				cnt+=1;
				bark[i]='W';
				bark[i+1]='O';
				bark[i+2]='O';
				bark[i+3]='F';
			}
		}
		printf("%d\n",cnt);
		puts(bark);
		memset(bark,0,1010);
	}
	return 0;
}

