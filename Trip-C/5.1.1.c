#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main1()
{
	int a = 0, sum=0;
	while(a <= 100)
	{
		sum = sum + a;
		a++;
	}
	printf("sum = % d", sum);
	return 0;
}