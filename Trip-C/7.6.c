#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int arr[10], i, j, k;
srand((unsigned)time(NULL));
printf("产生的随机数为：");
for (i = 0; i < 10; i++)
{
	arr[i] = rand()%100;
	printf("%d ", arr[i]);
}
printf("\n");
for (i = 0; i < 9; i++)
{
	for (j = 0; j < 9-i; j++)
		if (arr[j] > arr[j + 1])
		{
			k = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = k;
		}
}
printf("排序后的数据为：");
for (i = 0; i < 10; i++)
	printf("%d ", arr[i]);
return 0;
}
