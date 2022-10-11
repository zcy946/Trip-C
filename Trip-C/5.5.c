#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int a, x, y, z;
	printf("所有的水仙花数为：");
	for (a = 100; a < 1000; a++)
	{
		x = a / 100;
		y = a / 10 % 10;
		z = a % 10;
		if (a == x * x * x + y * y * y + z * z * z)
			printf("%d ", a);
		//printf("%d%d%d\n",x,y,z);
	}
	return 0;
}