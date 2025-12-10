#include<stdio.h>
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} }, g = 0;
		int i, j;
		for (i = 0;i < 3;i++)
		g = a[i][i];
	printf("%d", g);

	return 0;
}