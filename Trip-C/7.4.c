#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5], i, max, min;
	printf("���������Ԫ�أ�");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 1; i < 5; i++)
		if (max < a[i])
			max = a[i];
	printf("����Ԫ��Ϊ��%d\n", max);
	min = a[0];
	for (i = 1; i < 5; i++)
		if (min > a[i])
			min = a[i];
	printf("��С��Ԫ��Ϊ��%d\n", min);
	return 0;
}