#include <stdio.h>
int sum(int x, int *py)
{
	x += *py;
	return x;
}
int main()
{
	int a = 2, b = 3, c = 4;
	int sumnum;
	c = sum(a, &b);
	int i;
	for (i = 1; i <= 100; i++)
	{
		sumnum += i;
	}
	sumnum += b;
	printf("%d %d %d %d %d", sumnum, a, b, c, i);
	return 0;
}
