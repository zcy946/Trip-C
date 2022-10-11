#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, b, c;
	for (b = 9; b > 0; (b-=2))
	{
		for (c = 1; c <= (9-b)/2; c++)
		{
			printf(" ");
		}
		for (a = 1; a <= b; a++)
		{
			printf("%d", a);
		
		}
		printf("\n");
	}
	return 0;
}