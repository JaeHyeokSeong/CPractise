#include <stdio.h>

int main() {
	// int subways[3];
	// subways[0] = 30;
	// subways[1] = 20;
	// subways[2] = 41;

	// for(int i = 0; i < 3; i++) {
	// 	printf("%d 번째 열차에 %d 명이 타고 있습니다.\n", i, subways[i]);
	// }

	// int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	// for(int i = 0; i < 10; i++) {
	// 	printf("%d\n", numbers[i]);
	// }


	// c언어에서는 초기화 안해주면 trash value 가 들어가게 된다
	// int trash_number[10];
	// for(int i = 0; i < 10; i++) {
	// 	printf("%d\n",trash_number[i]);
	// } 

	// 나머지값들은 0으로 들어간다
	// int numbers[10] = {1,2,3};

	// for(int i = 0; i < 10; i++) {
	// 	printf("%d\n", numbers[i]);
	// }

	// float numbers_f[] = {0.1f, 0.2f, 0.3f};
	// for(int i = 0; i < 3; i++) {
	// 	printf("%.2f\n", numbers_f[i]);
	// }

	// 문자 그리고 문자열 
	// char c = 'A';
	// printf("%c\n", c);

	// 문자열 끝에는 끝을 의미하는 NULL 문자, 즉 \0 이 포함되어야 함
	// char str[7] = "coding";
	// printf("%s\n", str);

	// char str[] = "coding";
	// // printf("%lu\n", sizeof(str));

	// for(int i = 0; i < sizeof(str); i++){
	// 	printf("%c\n", str[i]);
	// }

	// char kor[] = "이름";
	// printf("%s\n", kor);
	// printf("%lu\n", sizeof(kor));

	// 영어는 한글자 1 byte
	// 한글은 한글자 2 byte

	// char array[7] = {'c','o','d', 'i', 'n', 'g', '\0'};
	// printf("%s\n", array);

	// 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for(int i = 0; i <= 127; i++) {
		printf("number : %d  => char : %c\n", i, i);
	}
}
