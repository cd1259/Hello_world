#include <stdio.h>
#include "game.h"

void game()
{
	printf("\n游戏开始\n");  //█
	//创建棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	clearboard(mine, ROWS, COLS, '0');
	clearboard(show, ROWS, COLS, '*');
	//展示棋盘
	display(show, ROW, COL);
	//放置雷
	Setmine(mine, ROW, COL);
	display(mine, ROW, COL);
	//扫雷
	Findmine(mine, show, ROW, COL);
}

void menu()
{
	printf("扫雷游戏\n是否游玩\n1.play\n0.exit\n\n");
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	 menu();
	 scanf_s("%d", &input);
	 switch (input)
	 {
	 case 1:
		 game();
		 break;
	 case 0:
		 printf("\n退出游戏\n");
		 break;
	 default:
		 printf("\n无效选择，请重新输入\n\n");
		 break;
	 }
	} while (input);
}

int main()
{
	test();
	return 0;
}