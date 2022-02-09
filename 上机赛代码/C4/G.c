#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MOD 1000000009
#define MAXN 1000005
long long f[MAXN*3];
int main()
{
	int n,i;
	scanf("%d",&n);
	n*=3;
	f[0]=1;
	for(i=1;i<=n;i++)
	{
		f[i]=f[i-1];
		if(i>=3)
		{
			f[i]=(f[i]+(2*f[i-3])%MOD)%MOD;
		}
		if(i>=6)
		{
			f[i]=(f[i]-(2*f[i-6])%MOD)%MOD;
		}
		f[i]=(f[i]+MOD)%MOD;
	}
	printf("%d",f[n]);
	return 0;
}

