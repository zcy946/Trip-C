#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int arr[10][10], x, y;
	for (x = 0; x < 10; x++)
	{
		arr[x][0] = 1;
		arr[x][x] = 1;
	}
	for (x = 2; x < 10; x++)
		for (y = 1; y < x; y++)
			arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= x; y++)
			printf("%-4d", arr[x][y]);
		printf("\n");
	}
	return 0;
}