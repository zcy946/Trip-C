#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int compare(int x, int y)
	{
		int max;
		if (x > y)
			max = x;
		else
			max = y;
		return max;
	}
int main()
{
	int x, y, fn;
	printf("����������������");
	scanf("%d%d",&x,&y);
	fn = compare(x, y);
	printf("���ֵΪ��%d\n",fn);
	return 0;
}