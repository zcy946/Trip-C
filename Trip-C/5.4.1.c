#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, fin=1, x, c;
	printf("请输入底数和幂的值：");
	scanf("%d%d", &a, &x);
	c = x;
	while (x > 0)
	{
		fin = fin * a;
		x--;
	}
	printf("%d^%d=%d", a, c, fin);
	return 0;
}