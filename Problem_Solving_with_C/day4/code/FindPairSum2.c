#include<stdio.h>

//Write a program to find all pairs with given sum in the array.

void findPair(int arr[], int size, int target){
	int found = 0;
	
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if((arr[i]+arr[j]) == target){
				found++;
				printf("Pair=(%d,%d)\n",i,j);				
			}
		}		
	}
	
	printf("%d pairs found.",found);
	
}

int main(){
	int arr[] = {1,2,3,6,4,9,5}, target=100;
	findPair(arr,7,target);
	return 0;
}


