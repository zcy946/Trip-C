#include <stdio.h>
int main()
{
	int i=1;
	char c='a';
	float f=1.5;
	printf("整型变量i的长度为%d\n",sizeof(i));
	printf("字符型变量c的长度为%d\n",sizeof(c));
	printf("浮点型变量f的长度为%d\n",sizeof(f));
	return 0;
}
