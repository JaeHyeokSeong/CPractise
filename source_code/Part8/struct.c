#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
    char* company;
};
int main(){
    struct GameInfo gameInfo1;
    gameInfo1.name = "스타크래프트";
    gameInfo1.year = 2005;
    gameInfo1.price = 100;
    gameInfo1.company = "블리자드";

    printf("name    : %s\n", gameInfo1.name);
    printf("year    : %d\n", gameInfo1.year);
    printf("price   : %d\n", gameInfo1.price);
    printf("company : %s\n", gameInfo1.company);

    // 구조체를 배열처럼 초기화
    printf("\n");
    struct GameInfo gameInfo2 = {"오버워치", 2017, 60, "블리자드"};
    printf("name    : %s\n", gameInfo2.name);
    printf("year    : %d\n", gameInfo2.year);
    printf("price   : %d\n", gameInfo2.price);
    printf("company : %s\n", gameInfo2.company);

    // 구조체 배열 
    struct GameInfo gamesInfo[2] = {
        {"오버워치", 2017, 60, "블리자드"},
        {"롤", 2015, 0, "어느기업"}
    };
    printf("\n");
    printf("name    : %s\n", gamesInfo[0].name);
    printf("year    : %d\n", gamesInfo[0].year);
    printf("price   : %d\n", gamesInfo[0].price);
    printf("company : %s\n", gamesInfo[0].company);

    printf("\n");
    printf("name    : %s\n", gamesInfo[1].name);
    printf("year    : %d\n", gamesInfo[1].year);
    printf("price   : %d\n", gamesInfo[1].price);
    printf("company : %s\n", gamesInfo[1].company);

    // 구조체 포인터
    struct GameInfo* gameInfo_ptr;
    gameInfo_ptr = &gamesInfo[0];
    gameInfo_ptr->price = 20;

    printf("\n");
    printf("name    : %s\n", gameInfo_ptr->name);
    printf("year    : %d\n", gameInfo_ptr->year);
    printf("price   : %d\n", gameInfo_ptr->price);
    printf("company : %s\n", gameInfo_ptr->company);
    int a = 0;
    
    
    return 0;
}