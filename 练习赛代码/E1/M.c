#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char name[40];
int main()
{
	int type;
	int num;
	double sum;
	double tax;
	double unitPrice;
	double sumPrice;
	double sumTax;
	while(scanf("%s%d%d%lf",name,&type,&num,&sum)!=EOF)
	{
		if(type==1)
		{
			tax=0.09;
		}
		else if(type==2)
		{
			tax=0.13;
		}
		else if(type==3)
		{
			tax=0.09;
		}
		else if(type==4)
		{
			tax=0.06;
		}
		sumPrice=sum/(1+tax);
		unitPrice=sumPrice/num;
		sumTax=sum-sumPrice;
		printf("%s %d %.2f %.2f %.0f%% %.2f\n",name,num,unitPrice,sumPrice,tax*100,sumTax);
		memset(name,0,40);
	}
	return 0;
}

