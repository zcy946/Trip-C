#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数开始比较大小：");
	scanf("%d%d",&a,&b);
	if(a<b)
	printf("较大的数为%d",b);
	else if(a>b)
	printf("较大的数为%d",a);
	else
	printf("%d与%d相等",a,b); 
	return 0;
 } 
