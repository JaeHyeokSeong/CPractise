#include <stdio.h>

// employee_t 구조체 선언
typedef struct {
    char* name;
    float fte; // 범위 [0.0, 1.0]
    unsigned int level; // 범위 [7, 18]
    // birthday (day, month, year)
    unsigned int day; // 범위 [1, 31]
    unsigned int month; // 범위 [1, 12]
    unsigned int year; // 범위 [1800, 2017]
} employee_t;

unsigned int read_integer(char* str, int min, int max){
    unsigned int value = 0;
    printf("%s", str);
    scanf("%u", &value);
    if(value < min || value > max){
        value = read_integer(str, min, max);
    }
    return value;
}
float read_float(char* str, int min, int max){
    float value = 0.0f;
    printf("%s", str);
    scanf("%f", &value);
    if(value < min || value > max){
        value = read_float(str, min, max);
    }
    return value;
}
void add_employee(employee_t* employee_t_ptr, int* index, int arraySize){
    /*
    employee_t 타입의 메모리 주소 받은 후 새로운 직원을 추가함.
    index 값을 이용해서 현재 배열의 상태를 확인함.
    만약 인덱스의 값이 배열의 사이즈를 초과한다면 직원을 추가하지 말고
    경고 메세지 발생시키기.
    */

    if(*index >= arraySize){
        printf("\n[Warning] Insufficient storage space\n");
    } else {
        char name[256];
        int i = *index;
        printf("===============Add Employee===============\n\n");
        printf("Enter name> ");
        scanf("%s", name);
        employee_t_ptr[i].name = name;
        // debuging
        // printf("Testing %s\n", employee_t_ptr[i].name);
        employee_t_ptr[i].day = read_integer("Enter birthday: day> ", 1, 31);  
        // printf("Testing %u\n", employee_t_ptr[i].day);
        employee_t_ptr[i].month = read_integer("Enter birthday: month> ", 1, 12);
        // printf("Testing %u\n", employee_t_ptr[i].month);
        employee_t_ptr[i].year = read_integer("Enter birthday: year> ", 1800, 2017);
        // printf("Testing %u\n", employee_t_ptr[i].year);
        employee_t_ptr[i].fte = read_float("Enter FTE> ", 0.0, 1.0);
        // printf("Testing %f\n", employee_t_ptr[i].fte);
        employee_t_ptr[i].level = read_integer("Enter level> ", 7, 18);
        // printf("Testing %u\n", employee_t_ptr[i].level);
        printf("==========================================\n\n");
        *index = i + 1;
    }
}
void delete_last_employee(employee_t* employee_t_ptr, int* index){
    if(*index == 0) {
        // nothing to delete
        printf("\bEmpty\n");
    } else{
        *index -= 1;
        printf("Removed\n");
    }
}
void view_employee(employee_t employee_list){
    printf("==========View============\n");
    printf("Name  :  %s\n", employee_list.name);
    printf("Day   :  %u\n", employee_list.day);
    printf("Month :  %u\n", employee_list.month);
    printf("Year  :  %u\n", employee_list.year);
    printf("FTE   :  %.2f\n", employee_list.fte);
    printf("Level :  %u\n", employee_list.level);
    printf("==========================\n\n");
}
int main(){
    // Initialise MAX_COMPANY_SIZE 
    // MAX_COMPANY_SIZE 변수에 나중에 원하는 값으로 설정
    const int MAX_COMPANY_SIZE = 2;

    // Initialise employee_t array
    employee_t employeelist[MAX_COMPANY_SIZE];
    int current_employee_number = 0;

    // 구현해야 하는 기능들
    // 1. employee 추가
    // 2. array에서 마지막 element 제거

    // Ouput
    int input = 0;
    do{
        printf("1 (Add), 2 (Remove), 3 (View), -1 (Exit) => ");
        scanf("%d", &input);
        if(input == 1){
            add_employee(employeelist, &current_employee_number, MAX_COMPANY_SIZE);
        } else if(input == 2){
            delete_last_employee(employeelist, &current_employee_number);
        } else if(input == 3){
            if(current_employee_number == 0){
                printf("Nothing to view\n");
                continue;
            }
            printf("Enter 1 ~ %d number => ", current_employee_number);
            int i = 0;
            scanf("%d", &i);
            view_employee(employeelist[i-1]);
        } else if(input != -1){
            printf("[Warning] 1 (Add), 2 (Remove), 3 (View), -1 (Exit) => ");
        }
    }while(input != -1);

    return 0;
}