//A simple function for adding two number.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	int sum = add(n1, n2);
	printf("%d", sum);
	return 0;
}