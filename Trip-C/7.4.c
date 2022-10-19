#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5], i, max, min;
	printf("请输入五个元素：");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 1; i < 5; i++)
		if (max < a[i])
			max = a[i];
	printf("最大的元素为：%d\n", max);
	min = a[0];
	for (i = 1; i < 5; i++)
		if (min > a[i])
			min = a[i];
	printf("最小的元素为：%d\n", min);
	return 0;
}