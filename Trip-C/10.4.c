#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, b, c;
	int* pa, * pb, * pc;
	pa = &a;
	pb = &b;
	pc = &c;
	scanf("%d%d", pa, pb);
	*pc = *pa + *pb;
	printf("%a = %d b = %d c = %d\n", a, b, c);
	printf("*pa = %d *pb = %d *pc = %d\n", *pa, *pb, *pc);
	return 0;
}