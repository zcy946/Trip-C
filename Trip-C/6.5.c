#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, b, c = 1, sum=0;
	printf("请输入一个整数:");
	scanf("%d", &b);
	for (a = 1; a <= b;a++)
	{
		c *= a;
		sum+=c;
	}
	printf("1!+2!+..+%d!=%d", b,sum);
	return 0;
}