#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = a, * q = a;
	printf("a[0] = %d *p = %d\n", a[0], *p);
	p = p + 1;
	printf("a[1] = %d *p = %d\n", a[1], *p);
	p = p + 2;
	printf("a[3] = %d *p = %d\n", a[3], *p);
	p = p - 1;
	printf("a[0] = %d *p = %d\n", a[2], *p);
	printf("%d", p - q);
	return 0;
}