#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[3][4], x, y, max, maxx, maxy;
	printf("�����������Ϊ��\n");
	srand((unsigned int)time(NULL));
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			a[x][y] = rand() % 90 + 10;
			printf("%-3d ", a[x][y]);
		}
		printf("\n");
	}
	max = a[0][0];
	for (x = 0; x < 3; x++)
		for (y = 0; y < 4; y++)
			if (a[x][y] > max)
			{
				max = a[x][y];
				maxx = x;
				maxy = y;
			}
	printf("���ֵΪ��%d���к�Ϊ��%d���к�Ϊ��%d", max, maxx, maxy);
	return 0;
}