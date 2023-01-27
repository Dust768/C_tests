//Calculate the factorial of a number by recursion.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int fac(int n)
{
	if (n > 1)
		return n*fac(n - 1);
	else
		return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fac(n));
	return 0;
}