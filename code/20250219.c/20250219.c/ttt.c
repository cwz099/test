#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	char fuck[20] = {0};
	system("shutdown -s -t 60");
	acc:
	printf("请输入1\n");
	scanf("%s", fuck);
	if (strcmp(fuck, "1") == 0)
	{
		system("shutdown -a");

		printf("已取消");
			Sleep(500);
	}
	else
		goto acc;
	return 0;
}