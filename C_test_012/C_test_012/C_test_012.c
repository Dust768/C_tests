#include<stdio.h>

int main()
{
	int i;
	for (i = 1; i <= 100;)
	{
		if (!(i % 3))
			printf("%d ", i);
		i++;
	}
	return 0;
}