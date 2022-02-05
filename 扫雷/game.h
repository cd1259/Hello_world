#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//行和列的个数
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//雷的个数
#define COUNT 10

void clearboard(char board[ROWS][COLS], int rows, int cols, char set);
void display(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROW][COLS], int row, int col);
void unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
