#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void caidan()
{
	printf("1 ��ʼ��Ϸ\n");
	printf("0 �˳���Ϸ\n");
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
			printf("��С��");
		}
		else if (guess > ret)
		{
			printf("�´���");
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
			printf("�������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("û�д�ѡ��");
			break;
		}
	} while (a);
		return 0;
}