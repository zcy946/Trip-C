#include <stdio.h>
int main()
{	
	int a,b,c,x;
	printf("��������Ҫ���ַ�ת����λ���֣�");
	scanf("%d",&x);
	a=x%10;
	b=x%100/10;
	c=x/100;
	printf("%d%d%d",a,b,c); 
	return 0;
}
