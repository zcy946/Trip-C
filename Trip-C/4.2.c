#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int x;
	float y;
	printf("Please input the number of water:");
	scanf("%d", &x);
	if (x < 0)
		y = 0;
	else if (x >= 0 && x <= 15)
		y = 4.0 * x / 3.0;
	else
		y = 2.5 * x - 17.5;
	printf("You need to pay %.2f гд", y);
	return 0;
}