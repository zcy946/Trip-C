#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void cmper(int* x, int* y, int* z)
{
	if (*x < *y)
		swap(x, y);
	if (*x < *z)
		swap(x, z);
	if (*y < *z)
		swap(y, z);
}
int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d%d%d", &a, &b, &c);
	cmper(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}