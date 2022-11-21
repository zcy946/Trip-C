#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void sel(int b[])
{
	int k, i;
	for (i = 0; i < 9; i++)
	{
		int m = i;
		for (k = i + 1; k < 10; k++)
			if (b[k] < b[m])
				m = k;
		int t = b[i];
		b[i] = b[m];
		b[m] = t;
	}
}
int main()
{
	int arr[10];
	printf("请输入十个数字：");
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	sel(arr);
	printf("排序后：");
	for (int x = 0; x < 10; x++)
		printf("%d ", arr[x]);
	return 0;
}