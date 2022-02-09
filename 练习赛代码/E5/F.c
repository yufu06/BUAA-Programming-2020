#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int compar (const void * a, const void * b)
{
   if (*(int *)a > *(int *)b) return 1;
   if (*(int *)a < *(int *)b) return -1; 
}
int arr[1010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),compar);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

