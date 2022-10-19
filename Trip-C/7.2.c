#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[20] = { 1,1 }, i;
	for (i = 2; i < 20; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
	printf("前十五项：\n");
	for (i = 0; i < 15; i++)
		printf("%d ", a[i]);
	printf("\n\n前二十项:\n");
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%4d ", a[i]);
	}
	return 0;
}