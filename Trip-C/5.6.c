#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	char a;
	int zimu = 0, num = 0, blank = 0, zifu = 0, other = 0;
	printf("输入一串字符开始计算字符类型以及各个字符类型个数：");
	while ((a = getchar()) != '\n')
		//printf("%d", a);
		if ((a>= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			zimu++;
		else if (a >= '0' && a <= '9')
			num++;
		else if (a = ' ')
			blank++;
		else if (a >= '!' && a <= '/')
			zifu++;
		else
			other++;
	printf("字母%d个，数字%d个，空格%d个，其他字符%d个", zimu, num, blank, other);
	return 0;
}