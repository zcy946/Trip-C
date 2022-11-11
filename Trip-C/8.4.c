#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	gets(a);
	printf("输入的字符个数为：%d", strlen(a));
	return 0;
}