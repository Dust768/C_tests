//A function of binary search.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int binary_search(int de, int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	int mid;
	do {
		mid = (left + right) / 2;
		if (arr[mid] < de)
			left = mid + 1;
		else if (arr[mid] > de)
			right = mid - 1;
		else
			return mid;
	} while (left <= right);
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int x;
	scanf("%d", &x);
	int s = binary_search(x, arr, sizeof(arr) / sizeof(arr[0]));
	if( s != -1)
		printf("exist, the sub is %d.", s);
	else
		printf("not exist.");
	return 0;
}