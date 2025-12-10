#include "head.h"

void menu()
{
	printf("*************************\n");
	printf("*************************\n");
	printf("******   1.play  ********\n");
	printf("******   0.exit  ********\n");
	printf("*************************\n");
	printf("*************************\n");
}
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//初始化棋盘
	inibroad(show,ROWS,COLS,'*');
	inibroad(mine,ROWS,COLS,'0');
	//布置地雷
	setmine(mine, ROW, COL);
	//打印棋盘
	//displaybroad(show,ROW,COL);
	//displaybroad(mine,ROW,COL);
	//排雷
	findmine(mine, show,ROW,COL);
}
int main()
{
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("扫雷\n");
			game();

			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}