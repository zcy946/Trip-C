#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max_num(int a[3][4])
{
	int m = a[0][0];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			if (a[i][j] > m)
			{
				int tem = m;
				m = a[i][j];
				a[i][j] = tem;
			}
	return m;
}
int main()
{
	srand((unsigned int)time(NULL));
	int arr[3][4] = {0}, i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = rand() % 100;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("最大值为%d\n", max_num(arr));
	return 0;
}