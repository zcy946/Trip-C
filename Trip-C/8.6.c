#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
float Add(float x, float y)
{
	float z = 0;
	z = x + y;
	return z;
}
int main()
{
	float num1, num2;
	printf("��������ʵ����");
	scanf("%f%f", &num1, &num2);
	printf("�����ĺ�Ϊ��%.2f", Add(num1, num2));
	return 0;
}