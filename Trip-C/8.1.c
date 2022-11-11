#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[2][3], b[3][2], i, j;
	for(i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	printf("原数组：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("置换后的数组：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	return 0;
}