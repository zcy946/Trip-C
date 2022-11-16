#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void compare(int a[])
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9 - i; j++)
			if (a[j] > a[j + 1])
			{
				int c;
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
}
int main()
{
	int arr[10];
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 100;
	printf("原数列为：");
	for (int i = 0; i < 10; i++)
		printf("%3d ", arr[i]);
	compare(arr);
	printf("\n排序后为：");
	for (int i = 0; i < 10; i++)
		printf("%3d ", arr[i]);
	return 0;
}