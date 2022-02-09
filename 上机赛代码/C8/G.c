#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define maxn 200010

int data[200010][3];
int cmp_rank(const int *p1,const int *p2)
{
	return p1[0]-p2[0]; 
}
int cmp_order(const int *p1,const int *p2)
{
	return p1[1]-p2[1];
}
void get_rank(int n)
{
	int i;
	data[1][2]=1;
	for(i=2;i<=n;i++)
	{
		if(data[i][0]==data[i-1][0])
			data[i][2]=data[i-1][2];
		else
			data[i][2]=data[i-1][2]+1;
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&data[i][0]);
		data[i][1]=i;
	}
	qsort(data+1,n,sizeof(data[0]),cmp_rank);
	get_rank(n);
	qsort(data+1,n,sizeof(data[0]),cmp_order);
	for(i=1;i<=n;i++)
	{
		printf("%d: [%d]",data[i][0],data[i][2]);
		if(i<n) puts("");
	}
	return 0;
}
