#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
//	int age = 25;
//	if(age >= 20)
//		printf("일반인 입니다.\n");
//	else
//		printf("학생입니다.\n");

//	초등학생(8-13) / 중학생 (14-16) / 고등학생 (17-19) / 어른 (20이상) 으로 나누면?
//	int age = 0;
//	printf("나이를 입력해 주세요 : ");
//	scanf("%d", &age);
//	if(age >= 20)
//		printf("어른\n");
//	else if(age >= 17 && age <= 19)
//		printf("고등학생\n");
//	else if(age >= 14 && age <= 16)
//		printf("중학생\n");
//	else if(age >= 8 && age <= 13)
//		printf("초등학생\n");
//	else
//		printf("유치원생\n");
    
//	1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
//	for(int i = 1; i <= 30; i++){
//		if(i>=1 && i<=5){
//			printf("%d 번호, 발표해\n", i);
//			if(i==5){
//				break;
//			}
//			continue;
//		}
//	}

//	1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석.
//	7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
	
//	for(int i = 1; i <= 30; i++) {
//		if(i>=6 && i <= 10){
//			if(i==7){
//				printf("%d 번호, 아파서 결석\n", i);
//				continue;
//			}
//			printf("%d 번호, 조별 발표해\n",i);
//		}
//	}

//	srand(time(NULL));
//	int ran = rand() % 3; // 0 1 2
//	if(ran == 0)
//		printf("가위\n");
//	else if(ran == 1)
//		printf("바위\n");
//	else if(ran == 2)
//		printf("보\n");

//	switch demo

//	srand(time(NULL));
//	int ran  = rand() % 3;
//	switch(ran){
//		case 0 :
//			printf("가위\n");
//			break;
//		case 1 :
//			printf("바위\n");
//			break;
//		case 2 :
//			printf("보\n");
//			break;
//	}

//	int age = 0;
//	printf("나이를 입력해 주세요 : ");
//	scanf("%d", &age);
//
//	switch(age){
//		case 8:
//		case 9:
//		case 10:
//		case 11:
//		case 12:
//		case 13:
//			printf("초등학생입니다.\n");
//			break;
//		case 14:
//		case 15:
//		case 16:
//			printf("중학생입니다.\n");
//			break;
//		case 17:
//		case 18:
//		case 19:
//			printf("고등학생입니다.\n");
//			break;
//		default:
//			printf("범위 안에 없습니다.\n");
//	}


	// project - up and down
	// 5번의 기회가 주어지는데 랜덤으로 하나의 숫자가 선정 되어질 것이다.
	// 이후 플레이어는 7번의 기회 안에서 그 숫자를 예측해야 하는 게임이다.
	// 숫자 범위 1 에서 100까지
	srand(time(NULL));
	int num = (rand() % 100) + 1;
	int value = 0;
	const int CHANCES = 7;

	for(int i = 0; i < CHANCES; i++) {
		printf("\n남은 횟수 : %d\n", CHANCES-(i+1));
		printf("1에서 100사이의 숫자를 입력해 주세요 : ");
		scanf("%d", &value);
		if(value > num)
			printf("%d 보다 down.\n", value);
		else if(value < num)
			printf("%d 보다 up.\n", value);
		else if(value == num){
			printf("\n성공!! 시도한 횟수 - %d\n", i+1);
			return 0;
		}
	}
	printf("\n실패 - 정답 : %d\n", num);
	return 0;
}
