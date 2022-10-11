#include <stdio.h>
int main()
{	
	float a,b;
	printf("请输入两个整数：");
	scanf("%f%f",&a,&b);
	printf("%.2f+%.2f=%.2f\n%.2f-%.2f=%.2f\n%.2f*%.2f=%.2f\n%.2f/%.2f=%.2f",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b);
	return 0;
}
