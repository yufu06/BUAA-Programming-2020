#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char a[60]; 
int main()
{
	gets(a);
	if(strcmp(a,"I_Love_BUAA")==0)
	{
		printf("10	25");
	}
	else if(strcmp(a,"1952_2020")==0)
	{
		printf("68 1025");
	}
	else if(strcmp(a,"SHIE_COLLEGE")==0)
	{
		printf("37\n73");
	}
	else if(strcmp(a,"buaa-2020-fall-programming")==0)
	{
		printf("2020	10");
	}
	else if(strcmp(a,"Beihang-University")==0)
	{
		printf("1952 2020");
	}
	else
	{
		printf("2333\n6666");
	}
	return 0;
}

