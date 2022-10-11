#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个整数开始判断正负:");
	scanf("%d",&a);
	if(a%2==0)
	printf("%d是一个偶数",a);
	else
	printf("%d是一个奇数",a);
	return 0;
}
