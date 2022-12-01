#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = a;
	printf("a[1] = %d  *(p + 1) = %d  *(a + 1) = %d\n", a[1], *(p + 1), *(a + 1));
	printf("a[3] = %d  *(p + 3) = %d  *(a + 3) = %d\n", a[3], *(p + 3), *(a + 3));
	return 0;
}