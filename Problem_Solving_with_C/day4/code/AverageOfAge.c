#include<stdio.h>

int avgOfAge(int x[], int size){
	int sum = 0;
	for(int i=0;i<size;i++){
		sum = sum + x[i];
	}	
	return sum/size;
}

void readAge(int age[], int size){
	printf("Enter age of %d persons : \n", size);
	for(int i=0;i<size;i++){
		scanf("%d", &age[i]);
	}
}	

int main(){
	int n;
	printf("How many numbers(Person's age) you want to enter : \n");
	scanf("%d", &n);
	
	int age[n]; //creation of array of size n
	
	readAge(age, n);
	
	//printf("Enter age of %d persons:\n", n);	
	//for(int i=0;i<n;i++){
	//	scanf("%d", &age[i]);
	//}
	
	//printf("You entered : \n");
	//for(int i=0;i<n;i++){
	//	printf("%d ", age[i]);
	//}
	
	int avg = avgOfAge(age, n);
	printf("Average = %d\n", avg);
		
	return 0;
}