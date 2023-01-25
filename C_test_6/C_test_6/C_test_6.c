#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n; //the number input
	int i = 1; //start with 1
	int f = 1; //factorial
	int s = 0; //sum
	scanf("%d", &n);
	for (; i <= n; i++)
	{
		f = f * i;//calculate the current factorial
		s = s + f;//add the factorial to the sum
	}
	printf("%d", s);
	return 0;
}