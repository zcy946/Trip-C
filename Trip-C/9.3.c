#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int cal(int x)
{
	if (x <= 1)
		return 1;
	else
		return x * cal(x - 1);
}
int main()
{
	int arr[10] = { 0 };
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = cal(i + 1);
		printf("%d! = %d\n", i + 1, arr[i]);
		sum += arr[i];
	}
	printf("sum = %.0lf\n", sum);
	return 0;
}