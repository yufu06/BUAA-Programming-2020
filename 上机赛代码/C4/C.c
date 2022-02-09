#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int x1,y1,r1,x2,y2,r2;
	int distance_2;
	int dif_2;
	int sum_2;
	while(scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2)!=EOF)
	{
		distance_2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		dif_2=(r1-r2)*(r1-r2);
		sum_2=(r1+r2)*(r1+r2);
		if(x1==x2&&y1==y2&&r1==r2)
		{
			printf("fu zhi zhan tie bu xiang ma\n");
		}
		else if(r1==r2)
		{
			printf("zong you ren yao yong jian pan ai ge qiao\n");
		}
		else if(x1==x2&&y1==y2)
		{
			printf("Ctrl+C/V tian xia di yi\n");
		}
		else if(distance_2<dif_2)
		{
			printf("zhe ci ying gai dou hui fu zhi le ba\n");
		}
		else if(distance_2==dif_2)
		{
			printf("oo00OO00ooo0OO0oo0OooO00oo\n");
		}
		else if(dif_2<distance_2&&distance_2<sum_2)
		{
			printf("lIllIIlI11lIIIlIl1l1111\n");
		}
		else if(distance_2==sum_2)
		{
			printf("rrnnmnrmrnmrnrmnrmrnrm\n");
		}
		else if(sum_2<distance_2)
		{
			printf("qpgqopgqopgopqgpqggqpoogoo\n");
		}
	}
	return 0;
}

