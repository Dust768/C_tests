#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	int sum = add(num1, num2);
	printf("%d", sum);
	return 0;
}