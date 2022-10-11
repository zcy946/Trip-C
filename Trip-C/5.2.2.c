#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a = 1, sum = 0;
	for (a = 1; a <= 100;a += 2)
	{
		sum = sum + a;
	}
	printf("100以内奇数的和为：%d", sum);
	return 0;
}