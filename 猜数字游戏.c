//随机生成1到100之间的数字
//玩家按1进入游戏
//可重复猜
//猜大猜小会有提示
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void caidan()
{
	printf("1 开始游戏\n");
	printf("0 退出游戏\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		int guess = 0;
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("right");
			break;
		}
	} 
}
int main()
{
	caidan();
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		
		int a = 0;
		scanf("%d", &a);
	
		switch (a)
		{
		case 1:
			printf("请猜数字\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("没有此选项");
			break;
		}
	} while (a);
		return 0;
}
