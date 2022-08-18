#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d",&a,&b);
	if (a > b)
		max = b;
	else
		max = a;
	while (1)
	{
		if (a % max == 0 && b % max == 0)
		{
			printf("%d", max);
			break;
		}
		max--;
	}
	return 0;

}
