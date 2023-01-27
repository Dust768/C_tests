//Find all odd number between 1 and 100.

#include<stdio.h>

int is_odd_number(n)
{
	if (n % 2)
		return 1;
	else
		return 0;
}

int main()
{
	int n, c = 0;
	for (n = 1; n <= 100; n++)
	{
		if (is_odd_number(n))
		{
			printf("%d ", n);
			c++;
		}
	}
	printf("\n%d", c);
	return 0;
}