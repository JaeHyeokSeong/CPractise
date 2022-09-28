#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int v1 = rand() % 10,  v2 = rand() % 10; 
	printf("%d, %d\n", v1, v2);
	return 0;
}
