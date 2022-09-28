#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level){
	return rand() % (level*7) + 1;
}
void showQuestion(int level, int v1, int v2){
	printf("[%d 단계] : %d X %d = ?  (종료 -1)\n", level, v1, v2);
}
int main(){
	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제됨 (랜덤 수)
	// 맞히면 통과, 틀리면 실패
	srand(time(NULL));
	for(int i = 1; i <= 5; i++) {
		int v1 = getRandomNumber(i);
		int v2 = getRandomNumber(i);
		int inputedValue = 0;
		showQuestion(i, v1, v2);
		scanf("%d", &inputedValue);
		if(inputedValue == -1){
			printf("게임 종료..\n");
			break;
		}
		if(inputedValue != v1*v2){
			printf("실패\n");
			break;
		}
		printf("성공!!\n\n");
	}
	return 0;
}
