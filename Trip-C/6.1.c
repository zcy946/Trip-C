#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 0; a <= 4;a++)
	{
		for (b = 0; b <= a; b++)
			printf(" ");
		printf("**********\n");
	}
	return 0;
}