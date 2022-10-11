#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	float basic = 2000.0, m, ad, money;
	printf("请输入您的销售额：");
	scanf("%f", &m);
	if (m > 7000 && m <= 10000)
		ad = basic * 0.1;
	else if (m > 10000)
		ad = basic * 0.2;
	else if (m < 0)
		printf("请正确输入数值");
	money = basic + ad;
	printf("您的工资为：%f", money);
	return 0;
}