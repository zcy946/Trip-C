#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
			printf("%d*%d=%d\t",a,b, a * b);
		printf("\n");
	}
	return 0;
}