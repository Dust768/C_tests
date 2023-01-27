//Input password.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char password[] = { "123456" };
	printf("Please input password:>");
	char input[20];
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (!strcmp(input, password))
		{
			printf("Password correct");
			break;
		}
		else if (i < 2)
			printf("Password incorrect, %d chance left:>", 2 - i);
		else
			printf("Password incorrect, no chance left!");
	}
	return 0;
}