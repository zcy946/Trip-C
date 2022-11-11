#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
int main()
{
	char ch1[20] = "bei jing";
	char ch2[] = "shang hai";
	printf("ch1串的长度为：%d\n", strlen(ch1));
	printf("ch2串的长度为：%d\n", strlen(ch2));
	printf("%d\n", strcmp(ch1, ch2));
	printf("%d\n", strcmp("xi an", ch2));
	printf("%d\n", strcmp("bcd", "bcd"));
	puts(strcat(ch1, ch2));
	puts(strcpy(ch1, ch2));
	return 0;
}
//strlen：返回字符串的长度
//strcmp：字符串的比较，返回值为（1， - 1，0）
//strcat：字符串的连接
//strcpy：字符串的复制
