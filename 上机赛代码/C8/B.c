#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ge;
	int shi;
	int bai;
	int qian;
	ge=n%10;
	shi=((n-ge)/10)%10;
	qian=n/1000;
	bai=n/100-10*qian;
	int sum;
	sum=ge+shi+bai+qian;
	printf("%d",sum);
}
