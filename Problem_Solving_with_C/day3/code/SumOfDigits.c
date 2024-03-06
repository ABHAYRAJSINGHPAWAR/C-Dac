#include <stdio.h>

int main(){
	int num,temp,sum;
	printf("Enter an integer:\n");
	scanf("%d", &num);
	
	temp = num;sum = 0;
	while(temp != 0){
	   sum = sum + temp%10;
	   temp = temp/10;
	}
	
	printf("Sum of digits of %d is %d",num, sum);
  
	return 0;  
}