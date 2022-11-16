#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int Fibonacci(int x)
{
	if (x == 1 || x == 2)
		return 1;
	else
		return Fibonacci(x - 1) + Fibonacci(x - 2);
}
int main()
{
	int  n, sum =  0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		sum += Fibonacci(i);
	printf("%d", sum);
	return 0;
}