#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[10], i;
	printf("��������ʮ�����ֽ�����˳�������\n");
	for (i=0;i<10;i++)
	{
		a[i] = rand() % 100;
		printf("%3d ", a[i]);
	}
	printf("\n");
	for (i=9;i>=0;i--)
		printf("%3d ", a[i]);
	return 0;
}