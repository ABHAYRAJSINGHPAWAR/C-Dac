#include<stdio.h>

int main(){
	int num;
	printf("Enter a integer number: \n");
	scanf("%d", &num);
	
	if(num==0){
		printf("Digit count for %d is 1",num);
		return 0;
	}
	
	int temp=num, count=0;
	while(temp != 0){
		temp = temp/10;
		count = count+1;
	}
	
	printf("Digit count for %d is %d",num,count);
	
	return 0;
}