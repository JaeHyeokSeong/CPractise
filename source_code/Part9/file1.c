#include <stdio.h>
#define MAX 10000
int main(){
    char line[MAX];
    // Receive File pointer address by using a fopen("filename", "format");
    // in format
    // r (read), w (write), a (append)
    // t (text), b (biany data)
    // ex) wb => means file format should be a write in a binary data
    // and if file is not exist, then create a new file
    FILE* file = fopen("test1.txt", "wb"); // binary format 
    if(file == NULL){
        printf("File open fail\n");
        return 1;
    }

    fputs("hello world\n", file);
    fputs("HELLO WORLD?", file);
    // 파일 열고 항상 닫아주기
    fclose(file);
}