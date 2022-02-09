#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define N (1000+5)
int IsZero(int a[],int n)
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		if(a[i]) return 0;
	}
	return 1;
}
char s[N];
int a[N];
void Solve()
{
	scanf("%s",s);
	int n=strlen(s);
	int i=1;
	for(i=1;i<=n;i++)
	{
		a[i]=s[n-i]-'0';
	}
	int ans=0;
	while(!IsZero(a,n))
	{
		ans+=a[1]&1;
		int i=1;
		for(i=n;i>0;i--)
		{
			a[i-1]+=a[i]%2*10;
			a[i]/=2;
		}
	}
	printf("%d\n",ans);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) Solve();
	return 0;
}

