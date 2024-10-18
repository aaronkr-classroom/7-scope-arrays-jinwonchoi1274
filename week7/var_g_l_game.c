#include <stdio.h>
#include <stdlib.h> //srand(),srand()
#include <time.h>
//time() - 1970년 1월1일 00:00부터 지금까지 ms

//전역변수
int randNum;

//게임초기화 함수
void gameInit() {
	srand(time(0));
	randNum = rand() % 10 + 1; //(0 ~ 9)+1 0 1~10
}

void gamePlay() {
	//지역변수
	int guess = 0;
	int count = 0;
	int allowed = 5; //5개의 추측만 할 수 있음

	printf("Guess the number (1~10):");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == randNum) {
			printf("Good Guess! You Win!");
			break;
		}
		else if (guess < randNum) {
			printf("Too low! Try again!");
		}
		else if (guess > randNum) {
			printf("Too high! Try again!");
			}
	} while (count != allowed); //추측5개 제한

	printf("Too many guesses! You lose!");
}

int main(void) {
	gameInit();
	gamePlay();
	return 0;
}