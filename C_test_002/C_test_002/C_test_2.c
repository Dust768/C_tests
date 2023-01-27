//Use of structure.

#include<stdio.h>

struct student
{
	char name[20];
	int age;
	char gender;
};

int main()
{
	struct student Ned = { "Ned", 14,'m' };
	printf("%s %d %c\n", Ned.name, Ned.age, Ned.gender);
	struct student* PNed = &Ned;
	printf("%s %d %c\n", (*PNed).name, (*PNed).age, (*PNed).gender);
	printf("%s %d %c\n", PNed->name, PNed->age, PNed->gender);
	return 0;
}