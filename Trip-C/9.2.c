#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int calculate(int x)
{
	if (x <= 1)
		return 1;
	else
		return x * calculate(x - 1);
}
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("%d! = %d\n", n, calculate(n));
	return 0;
}