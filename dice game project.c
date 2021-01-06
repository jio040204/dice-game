#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

#define ESC 27
	char key=0;

int main() {
	while(1){
	int su;
	printf("예상하는 주사위 수: ");
	scanf_s("%d", &su);
	switch (su)
	{
	case 1:
		printf(" -------\n");
		printf("|       |\n");
		printf("|   o   |\n");
		printf("|       |\n");
		printf(" -------\n");

		break;
	case 2:
		printf(" -------\n");
		printf("| o     |\n");
		printf("|       |\n");
		printf("|     o |\n");
		printf(" -------\n");
		break;
	case 3:
		printf(" -------\n");
		printf("| o     |\n");
		printf("|   o   |\n");
		printf("|     o |\n");
		printf(" -------\n");
		break;

	case 4:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("|       |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;

	case 5:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("|   o   |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;

	case 6:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("| o   o |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;
	default:
		printf("error!!그런 수는 주사위에 없다구!");
		return 0;
		break;
	}
	char answer[] = "과연 맞췄을까?", next[]="두구두구두구두구두구두구두구--------",rando[]="random number :";
	for (int i = 0; i < sizeof(answer) - 1; i++) {
		printf("%c", answer[i]);//과연 맞췄을까?
		Sleep(30);
	}printf("\n");

	for (int i = 0; i < sizeof(next) - 1; i++) {
		printf("%c", next[i]);//두구두구두구두구둑두ㅜ구`~~~~
		Sleep(50);
	}printf("\n");
	Sleep(500);
	for (int i = 0; i < sizeof(rando) - 1; i++) {
		printf("%c", rando[i]);
		Sleep(30);
	}printf("\n");

	srand(time(NULL));//random함수
	int random = (rand() % 6) + 1;//1~6 random


	switch (random)
	{
	case 1:
		printf(" -------\n");
		printf("|       |\n");
		printf("|   o   |\n");
		printf("|       |\n");
		printf(" -------\n");

		break;
	case 2:
		printf(" -------\n");
		printf("| o     |\n");
		printf("|       |\n");
		printf("|     o |\n");
		printf(" -------\n");
		break;
	case 3:
		printf(" -------\n");
		printf("| o     |\n");
		printf("|   o   |\n");
		printf("|     o |\n");
		printf(" -------\n");
		break;

	case 4:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("|       |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;

	case 5:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("|   o   |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;

	case 6:
		printf(" -------\n");
		printf("| o   o |\n");
		printf("| o   o |\n");
		printf("| o   o |\n");
		printf(" -------\n");
		break;
	default:
		printf("error!!");
		break;
	}
	printf("%d\n", random);

	if (su == random) {
		char aans[] = "우와ㅏㅏㅏㅏㅏ!!!\n정답이양!!\nyou are winner!\n";
		for (int i = 0; i < sizeof(aans) - 1; i++) {
			printf("%c", aans[i]);
			Sleep(30);
		}
		Sleep(1000);
	}
	else {
		char aaaaan[] = "아깝다ㅠㅠ\n다시 도전해봐!\nyou are loser!\n";
		for (int i = 0; i < sizeof(aaaaan) - 1; i++) {
			printf("%c", aaaaan[i]);
			Sleep(30);
		}
	}
	system("PAUSE");//계속하려면 아무 키나 누르시오.
	system("cls");

	key = getch();
	if (key == ESC) {
		return 0;
	}else{
		continue;
	}
	}
}