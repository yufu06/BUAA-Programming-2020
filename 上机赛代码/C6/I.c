#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

#define N (2000+5)

void bubble_sort(int arr[][2],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(arr[j][0]>arr[j+1][0])
			{
				int val=arr[j][0],id=arr[j][1];
				arr[j][0]=arr[j+1][0];
				arr[j+1][1]=arr[j+1][1];
				arr[j+1][0]=val;
				arr[j+1][1]=id;
			}
		}
	}
}

int a[N][2],b[N][2];

int main()
{
	int n,i;
	ll ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i][0]);
		a[i][1]=i;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i][0]);
		b[i][1]=i;
	}
	bubble_sort(a,n);
	bubble_sort(b,n);
	static int p[N];
	for(i=1;i<=n;i++)
	{
		ans+=1LL*(a[1][0]-b[i][0])*(a[1][0]-b[i][0]);
		p[a[i][1]]=b[i][1];
	}
	printf("%d ",p[i]);
	return 0;
}

