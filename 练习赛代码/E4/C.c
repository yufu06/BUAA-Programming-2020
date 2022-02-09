#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define N 500
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int T,n;
int a[N+5];
int main()
{
	scanf("%d",&T);
	int i,j,maxi;
	while(T--)
	{
		scanf("%d",&n);
		maxi=0;
		for(i=1;i<=n;i++) scanf("%d",&a[i]);
		if(!a[1])
		{
			printf("You lose!\n");           
			continue; 
		}
		for(i=1,maxi=a[1];i<=maxi&&maxi!=n;i++) maxi=min(max(i+a[i],maxi),n);
		printf(maxi==n?"Completed!\n" : "You lose!\n");
	}
	
	return 0;
}

