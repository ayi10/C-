#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", & k) ;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[1])-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+ 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
		{
			printf("%d", mid);
			break;
		}
	}
	return 0;
}