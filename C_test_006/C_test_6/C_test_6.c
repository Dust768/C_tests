//Calculate the sum of all factorial of a number.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n; //the number input
	int i; //the number that calculate factorial
	int f = 1; //factorial
	int s = 0; //sum
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		f *= i;//calculate the current factorial
		s += f;//add the factorial to the sum
	}
	printf("%d", s);
	return 0;
}