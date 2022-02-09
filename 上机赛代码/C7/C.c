#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char dog[510];
char jungle[510];
int main()
{
	gets(dog);
	gets(jungle);
	int len_dog;
	len_dog=strlen(dog);
	int len_jungle;
	len_jungle=strlen(jungle);
	int pos;
	int i;
	for(i=0;i<len_dog;i++)
	{
		if(dog[i]>='A'&&dog[i]<='Z')
		{
			dog[i]+=32;
		}
	}
	for(i=0;i<len_jungle;i++)
	{
		if(jungle[i]>='A'&&jungle[i]<='Z')
		{
			jungle[i]+=32;
		}
	}
	int temp_len;
	while(strstr(jungle,dog)!=NULL)
	{
		temp_len=strlen(strstr(jungle,dog));
		pos=len_jungle-temp_len;
		printf("%d ",pos);
		for(i=pos;i<pos+len_dog;i++)
		{
			jungle[i]-=1;
		}
	}
	return 0;
}

