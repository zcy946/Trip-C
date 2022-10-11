#include <stdio.h>
#define p 3.1415926535
int main()
{
	float r;
	printf("请输入半径：");
	scanf("%f",&r);
	printf("周长为：%.2f\n面积为：%.2f",2*r*p,p*r*r);	
	return 0;
}
