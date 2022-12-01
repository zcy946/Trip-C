#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void getGSB(int num, int* p1, int* p2, int* p3)
{
	*p1 = num / 100;
	*p2 = num / 10 % 10;
	*p3 = num % 10;
}
int main()
{
	int bai, shi, ge, n;
	int* p, * q, * r;
	p = &bai;
	q = &shi;
	r = &ge;
	scanf("%d", &n);
	getGSB(n, p, q, r);
	printf("百位：%d\n", bai);
	printf("十位：%d\n", shi);
	printf("个位：%d\n", ge);
	return 0;
}