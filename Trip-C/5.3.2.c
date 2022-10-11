#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a , all = 1, x;
	printf("Please input a number:");
	scanf("%d", &x);
	for (a = 1; a <= x; a++)
		all = all * a;
	printf("%d!=%d", x, all);
	return 0;
}