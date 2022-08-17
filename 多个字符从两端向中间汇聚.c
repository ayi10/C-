#include <stdio.h>
#include <windows.h>
int main()
{
	char arr1[] = "****";
	char arr2[] = "1234";
	int left = 0;
	int right = strlen(arr2) - 1;
	
	
		
	 while (left <= right);
	 {
		 arr1[left] = arr2[left];
		 arr1[right] = arr2[right];
		printf("%s\n", arr1);
		 left++;
		 right--;
		 
	 }
	 printf("787878");
	return 0;
	

}