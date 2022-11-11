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
	printf("请输入两个整数：");
	scanf("%d%d",&x,&y);
	fn = compare(x, y);
	printf("最大值为：%d\n",fn);
	return 0;
}