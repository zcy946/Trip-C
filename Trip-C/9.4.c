#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int sum(int x, int y)
{
	int s = 0;
	for (x; x <= y; x++)
		s += x;
	return s;
}
int main()
{
	int first, last;
	printf("����m��n��");
	scanf("%d%d", &first, &last);
	if (first > last)
	{
		int temp = 0;
		first = temp;
		first = last;
		last = temp;
	}
	printf("%d+%d+...+%d=%d", first, first + 1, last, sum(first, last));
	return 0;
}