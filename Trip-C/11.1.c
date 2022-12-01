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
	int x, y;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("交换后的结果为：%d %d", x, y);
	return 0;
}