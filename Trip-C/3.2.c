#include <stdio.h>
int main()
{
	char a,b,c,d,e;
	printf("请输入五个小字符：\n");
	a=getchar();
	b=getchar(); 
	c=getchar();
	d=getchar();
	e=getchar();
	putchar(a-32);
	putchar(b-32);
	putchar(c-32);
	putchar(d-32);
	putchar(e-32);
	
	return 0;
}
