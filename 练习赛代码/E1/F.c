#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf("%x",&x);
	if((x>=0x00&&x<=0x1F)||x==0x7F)
	{
		printf("Control Character!\n");
		{
			if(x==0x00)
			{
				printf("Null\n");
			}
			else if(x==0x09)
			{
				printf("Horizontal Tab\n");
			}
			else if(x==0x0A)
			{
				printf("Line Feed\n");
			}
			else if(x==0x0D)
			{
				printf("Carriage Return\n");
			}
			else
			{
				printf("Other Control Character\n");
			}
		}
	}
	else if(x==0x20||(x>=0x21&&x<=0x2F)||(x>=0x3A&&x<=0x40)||(x>=0x5B&&x<=0x60)||(x>=0x7B&&x<=0x7E))
	{
		printf("Symbol Character!\n");
		if(x==0x28||x==0x29||x==0x3C||x==0x3E||x==0x5B||x==0x5D||x==0x7B||x==0x7D)
		{
			printf("Bracket\n");
		}
		else
		{
			printf("Other Symbol\n");
		}
	}
	else if(x>=0x30&&x<=0x39)
	{
		printf("Digit Character!\n");
		putchar(x);
	}
	else if(x>=0x41&&x<=0x5A)
	{
		printf("Upper Case Alphabet!\n");
		putchar(x);
	}
	else if(x>=0x61&&x<=0x7A)
	{
		printf("Lower Case Alphabet!\n");
		putchar(x);
	}
	return 0;
}

