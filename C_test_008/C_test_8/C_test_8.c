#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char title[] = { "Hallo world!!!" };
	char cube[] = { "##############" };
	int left = 0;
	int right = strlen(title) - 1;
	printf("%s\n", cube);
	Sleep(1000);
	while (left < right)
	{
		cube[left] = title[left];
		cube[right] = title[right];
		printf("%s\n", cube);
		Sleep(1000);
		left++;
		right--;
	}
	if (left == right)
	{
		cube[left] = title[left];
		printf("%s\n", cube);
		Sleep(1000);
	}
	return 0;
}