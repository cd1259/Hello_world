#include<stdio.h>

void menu()//生成游戏菜单
{
	printf("********三子棋游戏**********\n");
	printf("**********1.play************\n");
	printf("**********2.exit************\n");
}

void clear(char board[3][3])//清空棋盘
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void display(char board[3][3])//展示棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if(j<2)
			printf(" %c |", board[i][j]);
			else
				printf(" %c", board[i][j]);
		}
		if(i<2)
		printf("\n---|---|---\n");
	}
}

void Move1(char board[3][3])//玩家1下棋动作执行
{
	int i, j;
	while (1)
	{
		printf("\n\n玩家1\n请输入下棋位置的坐标\n例如1 2\n");
		scanf_s("%d %d", &i, &j);
		while (i != 1 && i != 2 && i != 3 || j != 1 && j != 2 && j != 3)
		{
			printf("无效位置，请重新输入\n");
			scanf_s("%d %d", &i, &j);
		}
		if (board[i - 1][j - 1] == ' ')
		{
			board[i - 1][j - 1] = 'X';
			break;
		}
		else
		{
			printf("\n此位置已经有棋子，请重新输入");
		}
	}
	display(board);
}

void Move2(char board[3][3])//玩家2执行下棋动作
{
	int i, j;
	while (1)
	{
		printf("\n\n玩家2\n请输入下棋位置的坐标\n例如1 2\n");
		scanf_s("%d %d", &i, &j);
		while (i != 1 && i != 2 && i != 3 || j != 1 && j != 2 && j != 3)
		{
			printf("无效位置，请重新输入\n");
			scanf_s("%d %d", &i, &j);
		}
		if (board[i - 1][j - 1] == ' ')
		{
			board[i - 1][j - 1] = 'O';
			break;
		}
		else
		{
			printf("\n此位置已经有棋子，请重新输入");
		}
	}
	display(board);
}

char judge(char board[3][3])//判断游戏结果
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 2; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		return board[i][0];
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			if (board[i][j] != ' ')
				return'C';
		}
	}
	return'D';
}

int win(char board[3][3])
{
	while (1)
	{
		char a = judge(board);
		if (a == 'C')
		{
			return 1;
			break;
		}
		if (a == 'D')
		{
			printf("\n\n游戏结束\n平局\n");
			break;
		}
		if (a == 'X')
		{
			printf("\n\n游戏结束\n玩家1胜利\n");
			break;
		}
		if (a == 'O')
		{
			printf("\n\n游戏结束\n玩家2胜利\n");
			break;
		}
	}
	return 0;
}

void game()//游戏程序执行
{
	char board[3][3];
	clear(board);
	display(board);
	while (1)
	{
		Move1(board);
		int a = win(board);
		if (a == 0)
			break;
		Move2(board);
		a = win(board);
		if (a == 0)
			break;
	}
}

void test()//游戏是否游玩指令
{
	int a = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1: 
			printf("游戏开始\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("无效选择\n");
			break;

		}
	} while (a!=1&&a!=2);

}

int main()
{
	test();
	return 0;
}