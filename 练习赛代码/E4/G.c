#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int xa[60];
int ya[60];
int xb[60];
int yb[60];
int xc[60];
int yc[60];
int xd[60];
int yd[60];
int xe[1010];
int ye[1010];
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int cnt;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d%d%d%d%d%d%d%d",&xa[i],&ya[i],&xb[i],&yb[i],&xc[i],&yc[i],&xd[i],&yd[i]);
	}
	for(j=0;j<=m-1;j++)
	{
		scanf("%d%d",&xe[j],&ye[j]);
	}
	for(i=0;i<=n-1;i++)
	{
		int up,down,left,right;
			up=ya[i];
			if(up<=yb[i])
			{
				up=yb[i];
			}
			if(up<=yc[i])
			{
				up=yc[i];
			}
			if(up<=yd[i])
			{
				up=yd[i];
			}
			down=ya[i];
			if(down>=yb[i])
			{
				down=yb[i];
			}
			if(down>=yc[i])
			{
				down=yc[i];
			}
			if(down>=yd[i])
			{
				down=yd[i];
			}
			left=xa[i];
			if(left>=xb[i])
			{
				left=xb[i];
			}
			if(left>=xc[i])
			{
				left=xc[i];
			}
			if(left>=xd[i])
			{
				left=xd[i];
			}
			right=xa[i];
			if(right<=xb[i])
			{
				right=xb[i];
			}
			if(right<=xc[i])
			{
				right=xc[i];
			}
			if(right<=xd[i])
			{
				right=xd[i];
			}
			cnt=0;
		for(j=0;j<=m-1;j++)
		{ 
			if(xe[j]>=left&&xe[j]<=right&&ye[j]>=down&&ye[j]<=up)
			cnt=cnt+1;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
