#include "game.h"
void menu()
{
	printf("*** 1.paly***\n");
	printf("*** 0.exit***");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	    ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");

	}


}
int main()
{
	int input = 0;
	 srand((unsigned int)time(NULL));
	menu();
	printf("��ѡ��\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
			game();
			break;
	case 0:
		printf("�˳���Ϸ");
			break;
	default:
		printf("ѡ�����������ѡ��\n");
		break;


	}while (input);
	return 0;
}