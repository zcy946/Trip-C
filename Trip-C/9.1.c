#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int get_max(int a, int b, int c, int d)
{
	int tem;
	tem = compare(a, b);
	tem = compare(tem, c);
	tem = compare(tem, d);
	return tem;
}
int compare(int a, int b)
{
	int m;
	if (a > b)
		m = a;
	else
		m = b;
	return m;
}
int main()
{
	int max, arr[4] = {0};
	int i;
	printf("输入四个数字:");
	for (i = 0; i < 4; i++)
		scanf("%d", &arr[i]);
	max = get_max(arr[0], arr[1], arr[2], arr[3]);
	printf("Max = %d", max);
	return 0;
}
