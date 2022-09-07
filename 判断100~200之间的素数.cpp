#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 10; i <= 20; i++)
	{
		int j = 0;
		for (j = 2; j <=i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			
		}
		if (i == j)
		{
			printf("%d\n", j);
		}
	}
	return 0;
}