#include <stdio.h>
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}