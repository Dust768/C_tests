#include<stdio.h>

int main()
{
	int arr[] = { 3, 7, 1, 6, 2, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	int i;
	while (n > 0)
	{
		for (i = 0; i < n;)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			i++;
		}
		n--;
	}
	int j;
	for (j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}