#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	float basic=2000, fin=0, tc=0, yye;
	printf("����������Ӫҵ�");
	scanf("%f", &yye);
	if (yye > 3000 && yye <= 7000)
		tc = yye* 0.1;
	else if (yye > 7000 && yye <= 10000)
		tc = yye * (0.15);
	else if (yye > 10000)
		tc = yye * (0.2);
	fin = basic + tc;
	printf("���Ĺ���Ϊ��%.2f", fin);
	return 0;
}