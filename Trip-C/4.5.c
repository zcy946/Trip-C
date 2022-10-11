#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int month;
	char season;
	printf("请输入一个月份：");
	scanf("%d", &month);
	if (month <= 0 || month > 12)
		printf("请正确输入月份\n");
	else if (month >= 3 && month <= 5)
		printf("春季");
	else if (month >= 6 && month <= 8)
		printf("夏季");
	else if (month >= 9 && month <= 11)
		printf("秋季");
	else
		printf("冬季");
	return 0;
}