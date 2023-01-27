//Find the leap years between 1000 and 2000.

#include<stdio.h>

int is_leap_year(int y)
{
	if (!(y % 4))
	{
		if (y % 100)
			return 1;
		else if (!(y % 400))
			return 1;
	}
	return 0;
}

int main()
{
	int y, c = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y))
		{
			printf("%d ", y);
			c++;
		}
	}
	printf("\n%d", c);
	return 0;
}