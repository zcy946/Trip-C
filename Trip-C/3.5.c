#include <stdio.h>
int main()
{
	float a,b;
	printf("请输入两个实数:");
	scanf("%f%f",&a,&b);
	if(a<b)
	printf("%f %f",a,b);
	else if(a>b)
	printf("%f %f",b,a);
	else
	printf("您所输入的两个值相对"); 
	return 0;
}
