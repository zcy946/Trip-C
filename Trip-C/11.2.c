#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void change(int* p)
{
	*p = *p + 1;
}
int main()
{
	int a = 9;
	int* p = &a;
	printf("修改前：a = %d\n", a);
	change(p);
	printf("修改后：a = %d\n", a);
	return 0;
}