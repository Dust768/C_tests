//A simple exe file.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("shutdown -s -t 60");
	printf("ϵͳ����60s�ڹػ��������롰��������ֹ�ػ�:>\n");
	char input[20];
	flag:
	scanf("%s", input);
	if (!strcmp(input, "������"))
		system("shutdown -a");
	else
	{
		printf("�ش��������������:>");
		goto flag;
	}
	return 0;
}