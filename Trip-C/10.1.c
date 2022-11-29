#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float average(float score[], int n)
{
	float a = 0, sum = 0;
	for (int i = 0; i < 5; i++)
		sum += score[i];
	a = sum / n;
	return a;
}
int main()
{
	srand((unsigned int)time(NULL));
	float class1[5], class2[10];
	for (int i = 0; i < 5; i++)
		class1[i] = rand() % 100;
	for (int i = 0; i < 10; i++)
		class2[i] = rand() % 100;
	printf("A班的平均成绩为：%.2f\n", average(class1, 5));
	printf("B班的平均成绩为：%.2f\n", average(class2, 10))；

	return 0;
}
