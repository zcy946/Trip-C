#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	float a, b, c;
	char x;
	printf("��������Ҫ����ı��ʽ�������� ����� ����������");
	scanf("%f%c%f", &a ,& x ,& b);
	if (x == '+')
	{
		c = a + b;
		printf("%.2f+%.2f=%.2f", a, b, c);
	}
	 else if (x == '-')
	{
		c = a - b;
		printf("%.2f- %.2f =%.2f", a, b, c);
	}
	else if (x == '*')
	{
		c = a * b;
		printf("%.2f*%.2f=%.2f", a, b, c);
	}
	else if (x == '/')
	{
		c = a / b;
		printf("%.2f/%.2f=%.2f", a, b, c);
	}
	return 0;
}