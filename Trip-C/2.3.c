#include <stdio.h>
int main()
{
	char a;
	printf("请输入需要转换字母的大写形式："); 
	a=getchar();
	putchar(a+32);	
	return 0;
}
