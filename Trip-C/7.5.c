#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5], i, j, k;
	printf("����������ɼ���");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4 - i; j++)
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j+1] = k;
			}
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	return 0;
}
