#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int x, n, c,fin=1;
	printf("������������ݵ���ֵ��");
	scanf("%d%d", &x, &n);
	c = n;
	for (n; n > 0; n--)
	{
		fin = fin * x;
	}
	printf("%d^%d=%d", x, c, fin);
	return 0;
}