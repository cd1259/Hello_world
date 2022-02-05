#include "game.h"

void clearboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int countmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] - 8 * '0';
}

void unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = countmine(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';
		if (x - 1 >= 1 && x - 1 <= ROW && y >= 1 && y <= COL && show[x - 1][y] == '*')
		{
			unfold(mine, show, x - 1, y);
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y >= 1 && y <= COL && show[x + 1][y] == '*')
		{
			unfold(mine, show, x + 1, y);
		}
		if (y + 1 >= 1 && y + 1 <= ROW && x >= 1 && x <= COL && show[x][y + 1] == '*')
		{
			unfold(mine, show, x, y + 1);
		}
		if (y - 1 >= 1 && y - 1 <= ROW && x >= 1 && x <= COL && show[x][y - 1] == '*')
		{
			unfold(mine, show, x, y - 1);
		}
		if (x - 1 >= 1 && x - 1 <= ROW && y + 1 >= 1 && y + 1 <= COL && show[x - 1][y + 1] == '*')
		{
			unfold(mine, show, x - 1, y + 1);
		}
		if (x - 1 >= 1 && x - 1 <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x - 1][y - 1] == '*')
		{
			unfold(mine, show, x - 1, y - 1);
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y + 1 >= 1 && y + 1 <= COL && show[x + 1][y + 1] == '*')
		{
			unfold(mine, show, x + 1, y + 1);
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x - 1][y - 1] == '*')
		{
			unfold(mine, show, x + 1, y - 1);
		}
	}
	else
	{
		show[x][y] = count + '0';
	}
}


int judgewin(char show[ROWS][COLS])
{
	int i = 1;
	int j = 1;
	int a = 0;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			if (show[i][j] == '*' || show[i][j] == '#')
			{
				a++;
			}
		}
	}
	return a;
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int a = 0;
	while(1)
	{
		printf("\n请输入排雷的坐标,形如：0 x y\n或者输入红旗的坐标，形如：1 x y\n");
		scanf_s("%d %d %d", &a, &x, &y);
		switch (a)
		{
		case 0:
			if (1 <= x && x <= row && 1 <= y && y <= col)
			{
				int count = countmine(mine, x, y);
				if (mine[x][y] == '1')
				{
					printf("\n游戏失败\n");
					display(mine, row, col);
					printf("数字1为雷\n\n");
					a = 10;
					break;
				}
				else
				{
					unfold(mine, show, x, y);
					display(show, row, col);
					if (judgewin(show) == COUNT)
					{
						printf("\n游戏成功 (> _ <)\n\n");
						a = 10;
						break;
					}
				}
			}
			else
			{
				printf("\n无效坐标，请重新输入\n\n");
			}
			break;
		case 1:
			if (1 <= x && x <= row && 1 <= y && y <= col)
			{
				show[x][y] = '#';
				display(show, row, col);
			}
			else
			{
				printf("\n无效坐标，请重新输入\n\n");
			}
			break;
		default:
			printf("\n无效指令，请重新输入\n\n");
			break;
		}
		if (a == 10)
			break;
	}
}