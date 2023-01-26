//Calculate the greatest divisor of two numbers.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x, y, z;
	scanf("%d%d", &x, &y);
	while (z = x%y)
	{
		x = y;
		y = z;
	}
	printf("%d", y);
	return 0;
}