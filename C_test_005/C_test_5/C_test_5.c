#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, f = 1;
	scanf("%d", &n);
	for (; n > 0; n--)
		f *= n;
	printf("%d", f);
	return 0;
}