#include <stdio.h>
int main()
{
	float a,b;
	printf("����������ʵ��:");
	scanf("%f%f",&a,&b);
	if(a<b)
	printf("%f %f",a,b);
	else if(a>b)
	printf("%f %f",b,a);
	else
	printf("�������������ֵ���"); 
	return 0;
}
