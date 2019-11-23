//游戏测试
#include<stdio.h>
#include "game.h"


void menu()
{
	printf("*******************\n");
	printf("****** 1.play *****\n");
	printf("****** 0.exit *****\n");
	printf("*******************\n");
}

void game()
{
	int ret = 0;
	//存放数据
	char board[ROW][COL] = { 0 };
	//1.初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else if (ret == 'Q')
		{
			printf("平局\n");
		}
}


void Test()
{
	//测试的代码
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}