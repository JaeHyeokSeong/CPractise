#include <stdio.h>
int main(){
//  for demo
//	for(int i = 0; i < 10; i++) {
//		printf("Hello World\n");
//	}

// while demo
//	int i = 0;
//	while(i < 10){
//		printf("hello world\n");
//		i++;
//	}

//  do while demo	
//	int i = 0;
//	do{
//		printf("hello world\n");
//		i++;
//	}while(i<10);
	
	// 2 nested loop
	// 구구단 프로그램
//	for(int i = 1; i <= 9; i++){
//		printf("[%d]단\n", i);
//		for(int j = 1; j <= 9; j++) {
//			printf("%d X %d = %d\n",i, j, i*j);
//		}
//		printf("\n");
//	}

	// 아래의 모양 출력해보기
	// *
	// **
	// ***
	// ****
	// *****
	
	// method1
//	int nums[5] = {1,2,3,4,5};
//	for(int i = 0; i < 5; i++){
//		for(int j = 0; j < nums[i]; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	// method2
//	printf("\n");
//	for(int i = 0; i < 5; i++){
//		for(int j = 0; j < i+1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}

	// 아래의 모양 출력해보기
	//   *
	//  **
	// ***
	
//	const int SIZE = 5;
//	for(int i = 0; i < SIZE; i++) {
//		for(int j = 0; j < SIZE-(i+1); j++) {
//			printf(" ");
//		}
//		for(int k = 0; k <= i; k++){
//			printf("*");
//		}
//		printf("\n");
//	}


	// Project 
	// 피라미드를 쌓아라
	//     *
	//    ***
	//   *****
	//  *******
	// *********
	int floor = 0;
	printf("층수를 입력해 주세요 : ");
	scanf("%d", &floor);

	for(int i = 0; i < floor; i++) {
		for(int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for(int k = 0; k < (i*2+1); k++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
