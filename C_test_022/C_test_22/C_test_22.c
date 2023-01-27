//Find the nth fibonacci number.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int x = 1;
	int y = 1;
	int z;
	for (; n > 2; n--)
	{
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d", y);
	return 0;
}