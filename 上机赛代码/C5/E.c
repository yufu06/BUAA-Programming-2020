#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int get_phi(int);
int gcd(int, int);
int pow_mod(int, int, int);
int main()
{
	int T;
	scanf("%d",&T);
	int i;
	long long a,t,p;
	for(i=0;i<T;i++)
	{
		scanf("%lld%lld%lld",&a,&t,&p);
		if(gcd(a,p)==1)
		{
			printf("Case #1: %lld\n",pow_mod(a,t%(get_phi(p)),p));
		}
		else if(gcd(a,p)!=1&&t<get_phi(p))
		{
			printf("Case #2: %lld\n",pow_mod(a,t,p));
		}
		else
		{
			printf("Case #3: %lld\n",pow_mod(a,t%get_phi(p)+get_phi(p),p));
		}
	}
	return 0;
}

int get_phi(int n) {
	int phi = n, i; 
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			phi -= phi / i;
		}
	}
	if (n > 1) phi -= phi / n;
	return phi;
}

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int pow_mod(int a, int t, int p) {
	int ans = 1;
	while (t--)
		ans = 1LL * ans * a % p;
	return ans;
}

