//Find the leap years between 1000 and 2000.

#include<stdio.h>

int main()
{
	int y, c=0;
	for (y = 1000; y <= 2000; y++)
	{
		if ((!(y % 4) && (y % 100)) || !(y % 400))
		{
			printf("%d ", y);
			c++;
		}
	}
	printf("\ntotal:%d", c);
	return 0;
}