#include<stdio.h>

void display(int arr[], int size){
	printf("[");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

void readData(int arr[], int size){
	printf("Enter %d numbers:\n", size);
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
}

int main(){
	int size;
	printf("Enter size of array:\n");
	scanf("%d", &size);
	
	int arr[size];
	readData(arr,size);
	
	printf("Before: \n");
	display(arr,size);

	int i=0,j=size-1;
	while(i<j){
	   if(arr[i]!=0 && arr[j]==0){
		   int t = arr[i];
		   arr[i] = arr[j];
		   arr[j] = t;
	   }
	   
	   if(arr[i] ==0) i++;
	   
	   if(arr[j] !=0) j--;
	}
	
	printf("After: \n");
	display(arr,size);
	
	return 0;
}