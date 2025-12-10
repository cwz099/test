#include "head.h"

void inibroad(char broad[ROWS][COLS],int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			broad[i][j]=set;
		}
	}

}

void displaybroad(char broad[ROWS][COLS],int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------扫雷游戏-------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ",broad[i][j]);

		}
		printf("\n");

	}
	printf("-------------------扫雷游戏-------------------\n");

}
void setmine(char broad[ROWS][COLS], int row, int col)
{
	int count = easymode;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (broad[x][y] != '1')
		{
			broad[x][y] = '1';
			count--;
		}
	}
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	while (win < row * col - easymode)
	{
		displaybroad(show, ROW, COL);
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
					printf("输入重复,请重新输入\n");
			}
			else 
			{
				if (mine[x][y] == '1')
				{
					printf("被炸死了\n");
					displaybroad(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					int count = minecount(mine, x, y);
					show[x][y] = count + '0';
				}
			}
		}
		else
		{
			printf("输入坐标错误\n");
		}
	}
	if(win == row * col - easymode)
	printf("排雷成功\n");
}
int minecount(char mine[ROWS][COLS],int x, int y)
{
	return
			(	mine[x - 1][y - 1] +
				mine[x][y - 1] + 
				mine[x + 1][y - 1] +
				mine[x + 1][y] + 
				mine[x + 1][y + 1] +  
				mine[x][y + 1] + 
				mine[x - 1][y + 1] + 
				mine[x - 1][y]) - 8 * '0';
}
