#include <stdio.h>
int main()
{
	int b = 0, sum = 0;
	for (b = 1; b <= 100; b++)
	{
		sum = sum + b;
	}
	printf("sum=%d", sum);
	return 0;
}