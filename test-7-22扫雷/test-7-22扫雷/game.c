#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char mine[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}

void DisplayBoard(char mine[ROWS][COLS], int row, int col)
{
	int i, j;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x, y;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] +
	mine[x][y - 1] + mine[x + 1][y - 1] +
	mine[x + 1][y] + mine[x + 1][y + 1] +
	mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = 0;
	int win = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				count = get_mine_count(mine, x, y);
				if (show[x][y] == '*')
				{
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
				else
				{
					printf("坐标重复输入，请重新输入\n");
					DisplayBoard(show, ROW, COL);
				}	
			}
		}
		else
			printf("坐标非法,请重新输入\n");
		if (win == row*col - EASY_COUNT)
		{
			printf("你赢了\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}