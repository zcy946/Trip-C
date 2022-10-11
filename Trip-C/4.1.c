#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int x, y;
	printf("Please input the number of 'x':");
	scanf("%d", &x);
	if (x < -3)
		y = 1;
	else if (x >= -3 && x <= 3)
		y = x * x + 1;
	else
		y = x - 1;
	printf("%d", y);
	return 0;
}