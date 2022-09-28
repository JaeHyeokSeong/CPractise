#include <stdio.h>

// 구조체안에 구조체
struct GameInfo{
    char* name;
    int year;
    int price;
    char* company;

    struct GameInfo* gameInfo_ptr; // 연관 업체 게임
};

// typedef struct GameInformation{
//     char* name;
//     int year;
//     int price;
//     char* company;

//     struct GameInfo* gameInfo_ptr; // 연관 업체 게임
// } GAME;

typedef struct {
    char* name;
    int year;
    int price;
    char* company;

    struct GameInfo* gameInfo_ptr; // 연관 업체 게임
} Game;
int main(){
    struct GameInfo gameInfo2;
    gameInfo2.name = "스타크래프트";
    gameInfo2.year = 2005;
    gameInfo2.price = 100;
    gameInfo2.company = "블리자드";

    struct GameInfo gameInfo1 = {"오버워치", 2016, 43, "블리자드", &gameInfo2};
    printf("name    : %s\n", gameInfo1.name);
    printf("year    : %d\n", gameInfo1.year);
    printf("price   : %d\n", gameInfo1.price);
    printf("company : %s\n", gameInfo1.company);
    printf("\n자회사\n");
    printf("name    : %s\n", gameInfo1.gameInfo_ptr->name);
    printf("year    : %d\n", gameInfo1.gameInfo_ptr->year);
    printf("price   : %d\n", gameInfo1.gameInfo_ptr->price);
    printf("company : %s\n", gameInfo1.gameInfo_ptr->company);


    typedef int 정수;
    정수 정수이름 = 3;
    printf("%d\n", 정수이름);

    typedef struct GameInfo GameInfo;
    GameInfo gameInfo3 = {"롤", 2016, 0, "회사1"};
    printf("name    : %s\n", gameInfo3.name);
    printf("price   : %d\n", gameInfo3.price);
    printf("year    : %d\n", gameInfo3.year);
    printf("company : %s\n", gameInfo3.company);

    // GAME game;
    // game.name = "game1";
    // printf("%s\n", game.name);

    Game games[2] = {{"오버워치", 2016, 43, "블리자드"}, {"오버워치", 2016, 43, "블리자드"}};
    printf("\n\nname    : %s\n", games[0].name);
    printf("price   : %d\n", games[0].price);
    printf("year    : %d\n", games[0].year);
    printf("company : %s\n", games[0].company);
    printf("\n\n");
    printf("name    : %s\n", games[1].name);
    printf("price   : %d\n", games[1].price);
    printf("year    : %d\n", games[1].year);
    printf("company : %s\n", games[1].company);

    

}