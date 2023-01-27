//Binary search, find a number from a ordered array.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	scanf("%d", &n);
	int size = sizeof(arr) / sizeof(arr[0]);
	int le = 0;
	int ri = size - 1;
	int mi;
	while (le <= ri)
	{
		mi = (le + ri) / 2;
		if (arr[mi] < n)
			le = mi + 1;
		else if (arr[mi] > n)
			ri = mi - 1;
		else
		{
			printf("exist,the sub is %d", mi);
			break;
		}
	}
	if (le > ri)
		printf("not exist");
	return 0;
}