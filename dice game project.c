#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

#define ESC 27
	char key=0;

int main() {
	while(1){
	int su;
	printf("森雌馬澗 爽紫是 呪: ");
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
		printf("error!!益訓 呪澗 爽紫是拭 蒸陥姥!");
		return 0;
		break;
	}
	char answer[] = "引尻 限宙聖猿?", next[]="砧姥砧姥砧姥砧姥砧姥砧姥砧姥--------",rando[]="random number :";
	for (int i = 0; i < sizeof(answer) - 1; i++) {
		printf("%c", answer[i]);//引尻 限宙聖猿?
		Sleep(30);
	}printf("\n");

	for (int i = 0; i < sizeof(next) - 1; i++) {
		printf("%c", next[i]);//砧姥砧姥砧姥砧姥杵砧ぬ姥`~~~~
		Sleep(50);
	}printf("\n");
	Sleep(500);
	for (int i = 0; i < sizeof(rando) - 1; i++) {
		printf("%c", rando[i]);
		Sleep(30);
	}printf("\n");

	srand(time(NULL));//random敗呪
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
		char aans[] = "酔人たたたたた!!!\n舛岩戚丞!!\nyou are winner!\n";
		for (int i = 0; i < sizeof(aans) - 1; i++) {
			printf("%c", aans[i]);
			Sleep(30);
		}
		Sleep(1000);
	}
	else {
		char aaaaan[] = "焼鴛陥ばば\n陥獣 亀穿背坐!\nyou are loser!\n";
		for (int i = 0; i < sizeof(aaaaan) - 1; i++) {
			printf("%c", aaaaan[i]);
			Sleep(30);
		}
	}
	system("PAUSE");//域紗馬形檎 焼巷 徹蟹 刊牽獣神.
	system("cls");

	key = getch();
	if (key == ESC) {
		return 0;
	}else{
		continue;
	}
	}
}