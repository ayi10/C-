#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	scanf("%d%d%d", &a,&b,&c);
	

	if (a > b && a > c)
	{
		printf("%d", a);
		if (b > c)
		{
			printf("%d", b);
			d = c;
		}
		else if(b<c)
		{
			printf("%d", c);
			d = b;
		}
		printf("%d", d);
	}
	else if (b> a && b > c)
	{
		printf("%d",b);
		if (a> c)
		{
			printf("%d", a);
			d = c;
		}
		else if (a < c)
		{
			printf("%d", c);
			d =a;
		}
		printf("%d", d);
	}
	else if (c > b && c> a)
	{
		printf("%d", c);
		if (b > a)
		{
			printf("%d", b);
			d = a;
		}
		else if (b < a)
		{
			printf("%d", a);
			d = b;
		}
		printf("%d", d);
	}
	return 0;
}