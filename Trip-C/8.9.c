#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
int main()
{
	char ch1[20] = "bei jing";
	char ch2[] = "shang hai";
	printf("ch1���ĳ���Ϊ��%d\n", strlen(ch1));
	printf("ch2���ĳ���Ϊ��%d\n", strlen(ch2));
	printf("%d\n", strcmp(ch1, ch2));
	printf("%d\n", strcmp("xi an", ch2));
	printf("%d\n", strcmp("bcd", "bcd"));
	puts(strcat(ch1, ch2));
	puts(strcpy(ch1, ch2));
	return 0;
}
//strlen�������ַ����ĳ���
//strcmp���ַ����ıȽϣ�����ֵΪ��1�� - 1��0��
//strcat���ַ���������
//strcpy���ַ����ĸ���
