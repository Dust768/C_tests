//Guess a number between 1 and 100.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("   NumberGuss   \n");
	printf("################\n");
	printf("#### 1.paly ####\n");
	printf("#### 0.exit ####\n");
	printf("################\n");
}

void play()
{
	int number = rand() % 100 + 1;
	//printf("%d\n", number);
	int guess;
	do {
		printf("Please input your guess:>");
		scanf("%d", &guess);
		if (guess > number)
			printf("too big\n");
		else if (guess < number)
			printf("too small\n");
		else
			printf("bingo\n");
	} while (guess != number);
}

int main()
{
	int key;
	srand((unsigned int)time(NULL));
	do {
		menu();//display the menu.
		scanf("%d", &key);
		switch (key)
		{
		case 1://play game.
			play();
			break;
		case 0://exit.
			break;
		default://Reselect.
			printf("wrong input, please reselect.\n");
			break;
		}
	} while (key);
	return 0;
}