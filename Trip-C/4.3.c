#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	float x;
	char y;
	printf("Please input your score:");
	scanf("%f", &x);
	if (x < 0||x>100)
		printf("����ȷ����ɼ�\n");
	else if (x >= 0 && x <= 59)
	{
		y = 'E';
		printf("%.2f�ĵȼ�Ϊ%c", x, y);
	}
	else if (x >= 60 && x <= 69)
	{
		y = 'D';
		printf("%.2f�ĵȼ�Ϊ%c", x, y);
	}
	else if (x >= 70 && x <= 79)
	{
		y = 'C';
		printf("%.2f�ĵȼ�Ϊ%c", x, y);
	}
	else if (x >= 80 && x <= 89)
	{
		y = 'B';
		printf("%.2f�ĵȼ�Ϊ%c", x, y);
	}
	else
	{
		y = 'A';
		printf("%.2f�ĵȼ�Ϊ%c", x, y);
	}
	return 0;
}