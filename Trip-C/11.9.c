#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[10], * p, i;
	srand((unsigned int)time(NULL));
	p = a;
	for (i = 0; i < 10; i++)
		*(p++) = rand() % 100;
	p = a;
	for (i = 0; i < 10; i++, p++)
		printf("%d ", *p);
	return 0;
}