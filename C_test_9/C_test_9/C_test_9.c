#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char password[] = { "123456" };
	printf("Please input password:>");
	char input[20];
	int i = 0;
	while (i < 3)
	{
		scanf("%s", input);
		if (!strcmp(input, password))
		{
			printf("Password correct");
			break;
		}
		else
		{
			if (i < 2)
				printf("Password incorrect, please try again:>");
			else
				printf("Password incorrect, run out of chance!");
			i++;
		}
	}
	return 0;
}