#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[10];
	int* p,i;
	printf("输入10个整数：");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (p = a; p < (a + 10); p++)
		printf("%d ", *p);
	printf("\n");
	return 0;
}