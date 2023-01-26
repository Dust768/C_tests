//find the prime number between 100 and 200.

#include<stdio.h>
#include<math.h>

//Check if a number is prime.
int jug(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i))
			return 0;
	}
	return 1;
}

int main()
{
	int n, c = 0;
	for (n = 100; n <= 200; n++)
	{
		if (jug(n))
		{
			printf("%d ", n);
			c++;
		}
	}
	printf("\ntotal:%d", c);
	return 0;
}