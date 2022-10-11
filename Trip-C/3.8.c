#include <stdio.h>
int main()
{
	float a,b,c,x;
	printf("请输入三个不相等的数值进行从小到大的排列：");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		x=a;
		a=b;
		b=x;
	}
	if(a>c)
	{
		x=a;
		a=c;
		c=x;
	}
	if(b>c)
	{
		x=b;
		b=c;
		c=x;
	}
	printf("%.2f,%.2f,%.2f",a,b,c);
	return 0;
}
