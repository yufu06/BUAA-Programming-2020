#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int hh1,mm1;
	int hh2,mm2;
	int hh3,mm3;
	scanf("%02d:%02d",&hh1,&mm1);
	scanf("%02d:%02d",&hh2,&mm2);
	scanf("%02d:%02d",&hh3,&mm3);
	if(hh1*60+mm1+hh3*60+mm3+1>hh2*60+mm2)
	{
		printf("Hair Loss Warning");
	}
	else
	{
		int sum;
		sum=hh2*60+mm2-hh3*60-mm3-1;
		printf("%02d:%02d",sum/60,sum-(sum/60)*60);
	}
	return 0;
}

