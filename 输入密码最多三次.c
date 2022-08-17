#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
			scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登入成功\n");
			break;
		}
		else
		{
			printf("错误\n");
		}
	}
	if (i == 3)
		printf("输入三次均错误，退出\n");
	return 0;
}