#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int month;
	char season;
	printf("������һ���·ݣ�");
	scanf("%d", &month);
	if (month <= 0 || month > 12)
		printf("����ȷ�����·�\n");
	else if (month >= 3 && month <= 5)
		printf("����");
	else if (month >= 6 && month <= 8)
		printf("�ļ�");
	else if (month >= 9 && month <= 11)
		printf("�＾");
	else
		printf("����");
	return 0;
}