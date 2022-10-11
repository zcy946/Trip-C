#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a = 1, x, all=1;
	printf("Please input a number:");
	scanf("%d", &x);
	while (a <= x)
	{
		all = all * a;
		a++;
	}
	printf("%d!=%d", x, all);
	return 0;
}