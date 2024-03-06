#include <stdio.h>

int main(){
	int num[] = {100,101,102,103,104};
	
	printf("Address of num=%d \n", &num);
	printf("Address of num[0]=%d \n", &num[0]);
	printf("Address of num[1]=%d \n", &num[1]);
	
	int size = sizeof(num)/sizeof(num[0]);
	
	for(int i=0;i<size;i++){
		printf("%d \n", num[i]);
	}
	
	return 0;
}
