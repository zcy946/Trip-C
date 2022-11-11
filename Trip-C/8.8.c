#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	char name[20];
	printf("输入自己的姓名：");
	gets(name);
	printf("输出自己的姓名：");
	puts(name);
	return 0;
}