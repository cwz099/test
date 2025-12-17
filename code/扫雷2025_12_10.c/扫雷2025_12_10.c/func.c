#include "head.h"
int win = 0;
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

void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
    // 检查周围8个方向
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int nx = x + i;
            int ny = y + j;

            // 跳过自身、越界、已揭开的格子
            if ((i == 0 && j == 0) || nx < 1 || nx > row || ny < 1 || ny > col || show[nx][ny] != '*')
                continue;

            win++;  // 揭开一个格子，计数加1
            int count = minecount(mine, nx, ny);
            show[nx][ny] = count + '0';

            // 如果新位置也是空白，继续展开
            if (count == 0)
            {
                expand(mine, show, row, col, nx, ny);
            }
        }
    }
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    win = 0;  // 每局游戏清零

    while (win < row * col - easymode)
    {
        displaybroad(show, ROW, COL);
        printf("请输入坐标: ");
        scanf("%d%d", &x, &y);

        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (show[x][y] != '*')
            {
                printf("输入重复，请重新输入\n");
                continue;
            }

            if (mine[x][y] == '1')
            {
                printf("被炸死了！\n");
                displaybroad(mine, ROW, COL);
                break;
            }

            // 揭开当前格子
            win++;
            int count = minecount(mine, x, y);
            show[x][y] = count + '0';

            // 如果周围没雷，自动展开一片
            if (count == 0)
            {
                expand(mine, show, row, col, x, y);
            }
        }
        else
        {
            printf("输入坐标错误\n");
        }
    }

    if (win == row * col - easymode)
    {
        printf("排雷成功！\n");
        displaybroad(show, ROW, COL);
    }
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
