//A simple exe file.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("shutdown -s -t 60");
	printf("系统将在60s内关机，请输入“我是猪”终止关机:>\n");
	char input[20];
	flag:
	scanf("%s", input);
	if (!strcmp(input, "我是猪"))
		system("shutdown -a");
	else
	{
		printf("回答错误，请重新输入:>");
		goto flag;
	}
	return 0;
}