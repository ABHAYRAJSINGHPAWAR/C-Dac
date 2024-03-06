#include <stdio.h>

int main(){
	int num[5];
	
	num[0] = 100;
	num[1] = 101;
	num[2] = 102;
	num[3] = 103;
	num[4] = 104;
	
	printf("Value of num[2]=%d \n", num[2]);
	
	num[2] = num[2] * 10;
	printf("Value of num[2]=%d \n", num[2]);
	
	return 0;
}
