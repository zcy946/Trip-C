#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	float basic = 2000.0, m, ad, money;
	printf("�������������۶");
	scanf("%f", &m);
	if (m > 7000 && m <= 10000)
		ad = basic * 0.1;
	else if (m > 10000)
		ad = basic * 0.2;
	else if (m < 0)
		printf("����ȷ������ֵ");
	money = basic + ad;
	printf("���Ĺ���Ϊ��%f", money);
	return 0;
}