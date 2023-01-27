//Change the values of two variables by a function.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void swap(int* pa, int* pb)
{
	int z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a, b;
	int* pa = &a, * pb = &b;
	scanf("%d%d", pa, pb);
	swap(pa, pb);
	printf("%d %d", a, b);
	return 0;
}