#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	char a;
	int zimu = 0, num = 0, blank = 0, zifu = 0, other = 0;
	printf("����һ���ַ���ʼ�����ַ������Լ������ַ����͸�����");
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
	printf("��ĸ%d��������%d�����ո�%d���������ַ�%d��", zimu, num, blank, other);
	return 0;
}