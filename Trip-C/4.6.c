#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个年份：");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0)
		printf("%d是闰年", a);
	else
		printf("%d不是闰年", a);
	return 0;
}