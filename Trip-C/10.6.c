#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int* p1, * p2, a, b;
	printf("请输入两个整数：");
	scanf("%d%d", &a, &b);
	p1 = &a;
	p2 = &b;
	if(a < b)
	{
		p1 = &b;
		p2 = &a;
	}
	printf("a = %d, b = %d\n", a, b);
	printf("max = %d, min = %d\n", *p1, *p2);
	return 0;
}