#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a;
	printf("������һ����ݣ�");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0)
		printf("%d������", a);
	else
		printf("%d��������", a);
	return 0;
}