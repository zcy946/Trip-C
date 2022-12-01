#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a, b;
	//int* x, * y;
	printf("请输入两个整数：");
	scanf("%d%d", &a, &b);
	//x = &a, y = &b;
	int* x = &a, * y = &b;
	if (a > b)
		swap(x, y);
	printf("max = %d, min = %d", a, b);
	return 0;
}