#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	char a;
	while ((a = getchar()) != '\n')
	{
		if ((a >= 65 && a <= 86) || (a >= 97 && a <= 118))
			a += 4;
		else if ((a >= 87 && a <= 90) || (a >= 119 && a <= 122))
			a -= 22;
		putchar(a);
	}
	return 0;
}