#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int n,m,x,y,z;
	scanf("%d%d%d%d%d",&n,&m,&x,&y,&z);
	int week;
	week=(y+n-x+m+z)%7;
	if(week==0)
		week+=7;
	printf("%d",week);
	return 0;
}

