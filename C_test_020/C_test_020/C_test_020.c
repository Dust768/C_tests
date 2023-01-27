//Calculate the long of a character string whithout using a temproray varialbe.

#include<stdio.h>

int sl(char ar[])
{
	if (*ar == '\0')
		return 0;
	else
		return (sl(ar + 1) + 1);
}

int main()
{
	char arr[] = "abcdefghijk";
	printf("%d", sl(arr));
	return 0;
}