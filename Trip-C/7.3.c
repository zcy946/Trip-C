#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a[5] = { 1,3,5,7,9 }, i, x, j;
	printf("��������Ҫ���ҵ�Ԫ�أ�");
	scanf("%d", &x);
	for (i = 0; i < 5; i++)
	{
		if(x==a[i])
		j = i+1;
	}
	printf("%d�������е�λ��Ϊ%d", x, j);
	return 0;
}