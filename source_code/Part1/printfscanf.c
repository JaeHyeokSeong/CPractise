#include <stdio.h>

int main(){
    // 정수형 변수에 대한 예제
    /*int age = 12;
    printf("%d\n",age);
    age = 13;
    printf("%d\n", age);*/

    // 실수형 변수에 대한 에제
    // float f = 46.5f;
    // printf("%.2f\n",f); // 소숫점 두자리까지만 출력

    // double d = 4.428;
    // printf("%.2lf\n",d); // 소수점 2째자리까지만 출력. 그리고 출력할때 2째 자리까지인까 3번째 자리에서 반올림해서 출력

    // 상수 예제
    // const int YEAR = 2001;
    // printf("태어난 연도 : %d\n", YEAR);

    // printf 예제
    // 연산
    // int add = 3 + 7;
    // printf("3 + 7 = %d\n",add);

    // printf("%d * %d = %d\n", 39, 79, 39 * 79);

    // scanf 예제
	
//	int one, two, three;
//	printf("3개의 정수를 입력하세요 : ");
//	scanf("%d %d %d", &one, &two, &three);
//	printf("one : %d\n", one);
//    printf("two : %d\n", two);
//	printf("three : %d\n", three);
	
	// 문자(한 글자), 문자열 (한글자 이상의 여러 글자)
//	char c = 'A';
//	printf("%c\n", c);
//
//	char str[256];
//	printf("이름을 입력해 주세요 : ");
//	scanf("%s", str);
//	printf("안녕하세요 %s님\n", str);

	// 프로젝트 
	// 경찰관이 볌죄자의 정보를 입수 (조서 작성)
	// 이름, 나이, 몸무게, 키, 범죄명
	
	char name[100], crimeName[100];
	int age = 0;
	float weight = 0.0f, height = 0.0f;

	printf("이름을 입력해 주세요 : ");
	scanf("%s", name);
	printf("나이를 입력해 주세요 : ");
	scanf("%d", &age);
	printf("몸무게를 입력해 주세요 : ");
	scanf("%f", &weight);
	printf("키를 입력해 주세요 : ");
	scanf("%f", &height);
	printf("범죄명을 입력해 주세요 : ");
	scanf("%s", crimeName);

	printf("\n--- 범죄자 정보 ---\n\n");
	printf(" 이름   : %s\n", name);
	printf(" 나이   : %d\n", age);
	printf(" 몸무게 : %.2f\n", weight);
	printf(" 키     : %.2f\n", height);
	printf(" 범죄명 : %s\n", crimeName);
	return 0;
}
