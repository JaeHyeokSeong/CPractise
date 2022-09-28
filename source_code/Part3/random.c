#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// 난수 초기화
	srand(time(NULL));
	// 0 ~ 9 난수 발생시키기
	printf("10개의 난수들\n");
	for(int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf("\n");
	return 0;
}
