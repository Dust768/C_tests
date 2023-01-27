//Print each digit of a number by sequence.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void op(unsigned int x)
{
	if (x > 9)
		op(x / 10);
	printf("%d ", x % 10);
}

int main()
{
	unsigned int n;
	scanf("%d", &n);
	op(n);
	return 0;
}