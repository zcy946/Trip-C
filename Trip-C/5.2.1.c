#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a = 1, sum = 0;
	while (a <= 100)
	{
		sum = sum + a;
		a += 2;
	}
	printf("100���������ĺ�Ϊ��%d", sum);
	return 0;
}