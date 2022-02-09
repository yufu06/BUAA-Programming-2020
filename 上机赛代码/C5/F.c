#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int AIR(int,int,int);
int main()
{
	int a,b,x;
	while(scanf("%d%d%d",&a,&b,&x)!=EOF)
	{
		printf("%d\n",AIR(a,b,x));
	}
	return 0;
}
int AIR(int a,int b,int x)
{
	if(x<=a)
		return AIR(a,b,AIR(a,b,x+b+1));
	else	
		return x-b;
}

