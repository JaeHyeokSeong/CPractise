#include <stdio.h>

void view(char str[]){
	printf("[testing] %s\n", str);
}

int main(){
	char str[] = "hello world!!";
	view(str);
	return 0;
}
