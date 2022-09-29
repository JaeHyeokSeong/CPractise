#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void changeArray(int* arr, int index, int value){
    arr[index] = value;
}
int main(){
    // int num = 10;
    // int* num_address;
    // num_address = &num;
    // printf("num : %p\n", &num);
    // printf("num_address : %p\n", num_address);

    // printf("%d\n", *num_address);
    // *num_address = 100;
    // printf("num : %d\n", num);

    // int arr[3] = {10,20,30};
    // int* ptr = arr;
    // printf("%p\n", ptr);
    // printf("%d\n", *ptr); // 10
    // printf("%d\n", ptr[0]); // 10
    // printf("%d\n",ptr[1]); // 20

    // ptr[1] = 200;
    // printf("%d\n", arr[1]); // 200

    // int a = 10;
    // int b = 20;
    // printf("Before\n");
    // printf("a : %d, b : %d\n", a,b);
    // swap(&a, &b);
    // printf("After\n");
    // printf("a : %d, b : %d\n", a, b); 

    int arr[3] = {10,20,30};
    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");
    changeArray(arr, 1, 500);
    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
