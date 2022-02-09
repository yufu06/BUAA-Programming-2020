#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
double num[10];
char a[10];
char sign[10];
int main()
{
	scanf("%lf",&num[1]);
	scanf("%s",a);
	sign[1]=a[0];
	scanf("%lf",&num[2]);
	scanf("%s",a);
	sign[2]=a[0];
	scanf("%lf",&num[3]);
	scanf("%s",a);
	sign[3]=a[0];
	scanf("%lf",&num[4]);
	scanf("%s",a);
	sign[4]=a[0];
	scanf("%lf",&num[5]);
	scanf("%s",a);
	sign[5]=a[0];
	scanf("%lf",&num[6]);
	double total;
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==1)
		{
			if(sign[i]=='+')
			{
				total=num[i]+num[i+1];
			}
			else if(sign[i]=='-')
			{
				total=num[i]-num[i+1];
			}
			else if(sign[i]=='*')
			{
				total=num[i]*num[i+1];
			}
			else if(sign[i]=='/')
			{
				total=num[i]/num[i+1];
			}
		}
		else
		{
			if(sign[i]=='+')
			{
				total=total+num[i+1];
			}
			else if(sign[i]=='-')
			{
				total=total-num[i+1];
			}
			else if(sign[i]=='*')
			{
				total=total*num[i+1];
			}
			else if(sign[i]=='/')
			{
				total=total/num[i+1];
			}
		}
		
	}
	printf("%014.9f",total);
	
	return 0;
}

